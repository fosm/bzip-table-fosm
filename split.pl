use strict;
use warnings;

my $first;
my $mtu=1135 * 5;
my $buff="";

while (<>)
{
    chomp;
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
