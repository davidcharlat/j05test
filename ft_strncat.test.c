#include <stdio.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, int nb);

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

int     main()
{
	char dest1[100] = "hel";
	char origin1[100] = "hel";
	char src1[] = "lo world";
	char result1[]= "hello world";
	char result2[]= "hello";

	ft_strncat(dest1, src1, 20);
	printf("Since source char are \"%s\" and \"%s\", with 20 char to copy, destination should be \"%s\"\n", origin1, src1, result1);
	assertStringEqual(result1, dest1);
	printf("OK\n");

        dest1[3] = '\0';

	ft_strncat(dest1, src1, 2);
	printf("Since source char are \"%s\" and \"%s\", with 2 char to copy, destination should be \"%s\"\n", origin1, src1, result2);
	assertStringEqual(result2, dest1);
	printf("OK\n");
	return (0);
}
