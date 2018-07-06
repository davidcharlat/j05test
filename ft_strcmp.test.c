#include <stdio.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2);

void    assertIntEqual(int expected, int received)
{
    if (expected != received)
    {
        fprintf(stderr, "INTEGER_NOT_EQUAL : expecting %d - received %d.\n", expected, received);
        exit(1);
    }
}


void    assertIntnotEqual(int expected, int received)
{
    if (expected == received)
    {
        fprintf(stderr, "INTEGER_EQUAL : received %d.\n", received);
        exit(1);
    }
}

int     main()
{
    char s1[] = "hello";
	char s12[] = "hello";
	char s15[] = "hello ";
	char s2[] = "bello";
	char s3[] = "";
	
	printf("must return 0 for same strings\n");
	assertIntEqual ((ft_strcmp(s12, s1)), 0);
	printf("OK\n");
		
	printf("must find a difference if only one string is ended by a space\n");
	assertIntnotEqual (ft_strcmp(s1, s15), 0);
	printf("OK\n");
	
	printf("must compare first char\n");
	assertIntnotEqual (ft_strcmp(s1, s2), 0);
	printf("OK\n");
		
	printf("must return 0 if strings are empty\n");
	assertIntEqual (ft_strcmp(s3, s3), 0);
	printf("OK\n");

	printf("mustn't return 0 if only one string is empty\n");
	assertIntnotEqual (ft_strcmp(s15, s3), 0);
	printf("OK\n");
    return (0);
}
