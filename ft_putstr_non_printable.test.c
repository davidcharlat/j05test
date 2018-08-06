#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_putstr_non_printable(char *str);

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int     main(int argc, char **argv)
{
	printf ("%d string to print:\"%s\" becomes:\n", argc -1, argv[1]);	
	if (argc != 2)
		return (0);
	else
	{
		ft_putstr_non_printable(argv[1]);
		return (0);
	}
}
