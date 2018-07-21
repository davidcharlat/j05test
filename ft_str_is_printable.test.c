#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_printable(char *str);

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
	char s1[] = " az~";
	char s12[] = "\n";
	char s3[] = "";
	
	printf("must return 1 for %s\n",s1);
	assertIntEqual ((ft_str_is_printable(s1)), 1);
	printf("OK\n");
		
	printf("must return 0 for a feed line\n");
	assertIntEqual (ft_str_is_printable(s12), 0);
	printf("OK\n");

	printf("must return 1 for an empty string\n");
	assertIntEqual (ft_str_is_printable(s3), 1);
	printf("OK\n");
    return (0);
}
