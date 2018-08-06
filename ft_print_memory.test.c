#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_print_memory(void *addr, unsigned int size);

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int     main(int argc, char **argv)
{
	char string[] = "azertyuioplokij bhgàéhb vfghygyhygtafrdsteijhgft EEEFDFFEFVVEVERVRVEVVRVRV REEERF1245411511651651651e1d65e16z15c165e1c651555555555555555555555555555555555555555555555555555555555555555555555";
	void *ptr = &string;
	
	ft_print_memory(ptr, 0);
	return (0);	
}


