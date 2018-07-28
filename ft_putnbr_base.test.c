#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_putnbr_base(int nbr, char *base);
int     ft_is_base_ok(char *base);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int     main(int argc, char **argv)
{
	printf ("%d arguments:\nnbr: %d in base \"%s\" :\n", argc, atoi(argv[1]), argv[2]);	
	if (argc != 3)
		return (0);
	else
		ft_putnbr_base (atoi (argv[1]), argv[2]);
}
