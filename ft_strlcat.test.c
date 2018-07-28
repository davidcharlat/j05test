#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

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
	char origin1[100] = "hel";
	char src1[] = "lo world";
	char result1[]= "hello world";
	char result2[]= "hello";
	int i;

	i = ft_strlcat(dest1, src1, 20);
	printf("Since source char are \"%s\" and \"%s\", with 20 char to dest, destination should be \"%s\"\n", origin1, src1, result1);
	assertStringEqual(result1, dest1);
	printf("OK\n");
	printf("and ft_strlcat should return 11\n");
	assertIntEqual(i, 11);
	printf("OK\n");

        dest1[3] = '\0';

	i = ft_strlcat(dest1, src1, 5);
	printf("Since source char are \"%s\" and \"%s\", with 5 char to dest, destination should be \"%s\"\n", origin1, src1, result2);
	assertStringEqual(result2, dest1);
	printf("OK\n");
	printf("and ft_strlcat should return 11\n");
	assertIntEqual(i, 11);
	printf("OK\n");

 	dest1[3] = '\0';

	i = ft_strlcat(dest1, src1, 2);
	printf("Since source char are \"%s\" and \"%s\", with 2 char to dest, destination should be \"%s\"\n", origin1, src1, origin1);
	assertStringEqual(origin1, dest1);
	printf("OK\n");
	printf("and ft_strlcat should return 11\n");
	assertIntEqual(i, 11);
	printf("OK\n");
	return (0);
}
