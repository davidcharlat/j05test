#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void    assertStringEqual(char *expected, char *received)
{
   int cursor;

	cursor = 0;
	while (*(expected + cursor) != '\0' && *(expected + cursor) == *(received + cursor))
			cursor++;
	if (*(expected + cursor) != *(received + cursor))
	{
	        fprintf(stderr, "STRING_NOT_EQUAL : expecting %s - received %s.\n", expected, received);
	        exit(1);
	}
}

void    assertIntEqual(int expected, int received)
{
    if (expected != received)
    {
        fprintf(stderr, "INTEGER_NOT_EQUAL : expecting %d - received %d.\n", expected, received);
        exit(1);
    }
}


int     main()
{
	char dest1[100] = "hel";
	char dest2[100] = "hel";
	char origin1[100] = "hel";
	char src1[] = "lo world";
	char result1[]= "lo world";
	char result2[]= "lo w";
	int i;

	i = ft_strlcpy(dest1, src1, 20);
	printf("Since dest is \"%s\" and src \"%s\", with 20 char to copy, destination should be \"%s\"\n", origin1, src1, result1);
	assertStringEqual(result1, dest1);
	printf("OK\n");
	printf("and ft_strlcpy should return 8\n");
	assertIntEqual(i, 8);
	printf("OK\n");

	i = ft_strlcpy(dest2, src1, 5);
	printf("Since dest is \"%s\" and src \"%s\", with 5 char to copy, destination should be \"%s\"\n", origin1, src1, result2);
	assertStringEqual(result2, dest2);
	printf("OK\n");
	printf("and ft_strlcpy should return 4\n");
	assertIntEqual(i, 4);
	printf("OK\n");

	return (0);
}

