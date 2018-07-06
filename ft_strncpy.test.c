#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void    assertCharEqual(char expected, char received)
{
    if (expected != received)
    {
        fprintf(stderr, "CHAR_NOT_EQUAL : expecting %c - received %c.\n", expected, received);
        exit(1);
    }
}

int     main()
{
    char dest[] = "a25Atzlkjrkqslkj";
	char destbis[] = "a25Atzlkjrkqslkj";
	char src[] = "ok";
	int i;

	i = 0;
	ft_strncpy(dest, src, 2);
	while (i <= 1)
	{
		printf("Since source char nb%d is \"%c\", destination should be \"%c\"\n", i, src[i], dest[i]);
		assertCharEqual(src[i], dest[i]);
		printf("OK\n");
		i++;
	}
	printf ("if soucre lenght and dest lenght are longer than lenght to copy, the dest will not be null-terminated\n");
	if (dest[2] == '\0')
		{
			printf ("error");
			exit(1);
		}
	else
		printf ("OK\n");
	ft_strncpy(dest, src, 8);
	printf ("\nif source lenght is shorter than lenght to copy, the dest will be terminated by additional null bytes to ensure that a total of n bytes are written.\n");
	i = 6;
	while (i <= 7)
	{
		printf("\tSince initial destination char nb%d is \"%c\", destination should be \"%c\"\n", i, destbis[i], dest[i]);
		assertCharEqual('\0', dest[i]);
		printf("\tOK\n");
		i++;
	}
	printf ("no more than n bytes must be changed.\n");
	assertCharEqual(dest[i],destbis[i]);
	printf("OK\n");
		
    return (0);
}
