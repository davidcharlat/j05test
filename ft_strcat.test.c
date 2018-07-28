#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

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
	char dest1[100];
	char origin1[100];
	
	origin1[0] = 'h';
	origin1[1] = 'e';
	origin1[2] = 'l';
	origin1[3] = '\0';
	dest1[0] = 'h';
	dest1[1] = 'e';
	dest1[2] = 'l';
	dest1[3] = '\0';
	char src1[] = "lo world";
	char result1[]= "hello world";

	ft_strcat(dest1, src1);
	printf("Since source char are \"%s\" and \"%s\", destination should be \"%s\"\n", origin1, src1, result1);
	assertStringEqual(result1, dest1);
	printf("OK\n");
	return (0);
}
