#use encoding "raw";
my $file_path = shift @ARGV;
open my $fh, '<', $file_path 
    or die "Cannot open file '$file_path' for reading";

my $buffer;
while ( my $got = read( $fh, $buffer, 1024 ) ) {
    #warn "Read $got bytes from file\n.";
    my @integers = unpack "q*", $buffer;
    print join ("\n",@integers). "\n";
    $buffer = '';
}
