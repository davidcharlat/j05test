#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_uppercase(char *str);

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
	char s1[] = "AZE";
	char s12[] = "@SDE";
	char s15[] = "FG[";
	char s3[] = "";
	
	printf("must return 1 for %s\n",s1);
	assertIntEqual ((ft_str_is_uppercase(s1)), 1);
	printf("OK\n");
		
	printf("must return 0 for %s\n",s12);
	assertIntEqual (ft_str_is_uppercase(s12), 0);
	printf("OK\n");
	
	printf("must return 0 for %s\n",s15);
	assertIntEqual (ft_str_is_uppercase(s15), 0);
	printf("OK\n");

	printf("must return 1 for an empty string\n");
	assertIntEqual (ft_str_is_uppercase(s3), 1);
	printf("OK\n");
    return (0);
}
