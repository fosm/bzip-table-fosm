use JSON;
use strict;
use warnings;

#my %index; # id to file

use Data::Dumper;

sub readdata
{
#use encoding "raw";
    my $file_path = shift;
    my $number=shift;
    my $type=shift;

    if ($file_path =~ /(node|way|rel)/)
    {
        $type=$1;
    }
    if (! -f $file_path)
    {
        return;
    }

    open my $fh, '<', $file_path 
        or die "Cannot open file '$file_path' for reading";
    
    my $buffer;
    my $pos=0;
    while ( my $got = read( $fh, $buffer, 1024 ) ) {
        #warn "Read $got bytes from file\n.";
        my @integers = unpack "q*", $buffer;
        #print join ("\n",@integers). "\n";
        map {
#            $index{$type}{pos}{$_}= $pos;
#            $index{$type}{file}{$_}=$number;
#            $index{$type}{$_}=[$number,$pos];
            print OUT join ("\t",($_,$number,$pos)) . "\n";
            $pos++;
        } @integers;
        $buffer = '';
    }
    
}

sub ProcessOne
{
    my $s3=shift;
    if ($s3 =~ /\/((\d+)_i.tbz)/)
    {
        my $file=$1;
    my $number=$2;
#    warn "File $file";
#    warn "Number $number";
    if (! -f $file)
    {
        die unless system "s3cmd get $s3";
    }
    elsif (-d  "datafiles/$number")
    {
        warn "Check datafiles/$number";
        readdata ("datafiles/$number/node_ids.bin",$number,"node");
        readdata ("datafiles/$number/way_ids.bin",$number,"way");
        readdata ("datafiles/$number/rel_ids.bin",$number,"rel");
    }
    else
    {
        warn "Unpack $file";
        die unless system "tar -xjf $file";
    }
    }
}

sub openindex
{
    my $number=shift;
    mkdir "json" unless -d "json";
    open OUT, ">json/$number.json";
}

sub writeindex
{
#    $json_text = encode_json \%index;
#warn Dumper(%index);
#    print OUT $json_text;
    close OUT;        

}

sub readfiles
{
    open IN, "index.txt";
    while(<IN>)
    {
        ProcessOne $_;
    }
    close IN;
}

sub main
{
    openindex "total";
    readfiles;
    writeindex;
}

main;
