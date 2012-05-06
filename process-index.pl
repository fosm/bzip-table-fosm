use JSON;
use strict;
use warnings;

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
    mkdir "index" unless -d "index";
    open OUT, ">index/node_${number}.txt";
    open OUTW, ">index/way_${number}.txt";
    open OUTR, ">index/rel_${number}.txt";
}

sub writeindex
{
    close OUT;        
    close OUTW;        
    close OUTR;        
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
