#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

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
	char src[] = "all right";
	int i;

	i = 0;
	ft_strcpy(dest, src);
	while (i <= 9)
	{
		printf("Since source char nb%d is \"%c\", destination should be \"%c\"\n", i, src[i], dest[i]);
		assertCharEqual(src[i], dest[i]);
		printf("OK\n");
		i++;
	}
    return (0);
}
