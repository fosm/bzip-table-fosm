use strict;
use warnings;

my $first;
my $mtu=1135 * 5;
my $buff="";
my $index="fosm-20120401130001-idx-xaaaa.txt";
open OUT2,">$index";
while (<>)
{
#    chomp;
    if (/(\d+)\t\d+\t\d+/)
    {
	my $index=$1;

	if (!$first)
	{
	    $first=$index;
	}

	if (length($buff)>=$mtu)
	{
	    my $last=$index;
	    my $file ="index-${first}-${last}.txt";
	    open OUT,">$file";
	    print OUT $buff;
	    close OUT;
	    system ("bzip2 $file");
	    print OUT2 "${file}.bz2\n";
	    $buff="";
	    $first=undef;
	}

	$buff .= $_; # just append the string to the list until we get the size 

    }
    else
    {
	die $_;
    }
}
close OUT2;
