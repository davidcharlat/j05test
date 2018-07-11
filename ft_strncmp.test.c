#include <stdio.h>
#include <stdlib.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

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
	char s12[] = "hellao";
	char s15[] = "hello ";
	char s2[] = "bello";
	char s3[] = "";
	
	printf("must return 0 for same strings till the n-th char\n");
	assertIntEqual ((ft_strncmp(s1, s15, 5)), 0);
	printf("OK\n");
		
	printf("must find a difference if the n-th char is different\n");
	assertIntnotEqual (ft_strncmp(s12, s15, 5), 0);
	printf("OK\n");
	
	printf("must compare chars before the n-th\n");
	assertIntnotEqual (ft_strncmp(s15, s2, 5), 0);
	printf("OK\n");
		
	printf("must return 0 if strings are empty\n");
	assertIntEqual (ft_strncmp(s3, s3, 1), 0);
	printf("OK\n");

	printf("must return 0 for same strings if their lenght < n\n");
	assertIntEqual (ft_strncmp(s1, s1, 8), 0);
	printf("OK\n");

	printf("mustn't return 0 if one string composed by the firsts chars of the other string\n");
	assertIntnotEqual (ft_strncmp(s15, s1, 6), 0);
	assertIntnotEqual (ft_strncmp(s1, s15, 6), 0);
	printf("OK\n");
    return (0);
}
