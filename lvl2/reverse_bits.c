unsigned char 	reverse_bits(unsigned char octet)
{
	unsigned int	bit;
	int i;

	i = 7;
	while (i >= 0)
	{
		bit = ((bit * 2) + (octet % 2));
		octet = octet / 2;
		i--;
	}
	return (bit);
}