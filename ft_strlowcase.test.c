#include <stdio.h>
#include <stdlib.h>

char	*ft_strlowcase(char *str);

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
    char origin[] = "ZA90#1*[à@ED";
	char src[] = "ZA90#1*[à@ED";
	char result[] = "za90#1*[à@ed";
	int i;

	i = 0;
	ft_strupcase(src);
	while (i <= 13)
	{
		printf("Since source char is \"%c\", destination should be \"%c\"\n", origin[i], result[i]);
		assertCharEqual(src[i], result[i]);
		printf("OK\n");
		i++;
	}
    return (0);
}
