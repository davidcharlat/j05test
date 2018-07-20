#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_alpha(char *str);

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
	char s1[] = "azAZertf";
	char s12[] = "hello@";
	char s15[] = "hello[";
	char s18[] = "hello{";
	char s2[] = "`bello";
	char s3[] = "";
	
	printf("must return 1 for %s\n",s1);
	assertIntEqual ((ft_str_is_alpha(s1)), 1);
	printf("OK\n");
		
	printf("must return 0 for %s\n",s12);
	assertIntEqual (ft_str_is_alpha(s12), 0);
	printf("OK\n");
	
	printf("must return 0 for %s\n",s15);
	assertIntEqual (ft_str_is_alpha(s15), 0);
	printf("OK\n");

	printf("must return 0 for %s\n",s18);
	assertIntEqual (ft_str_is_alpha(s18), 0);
	printf("OK\n");
		
	printf("must return 0 for %s\n",s2);
	assertIntEqual (ft_str_is_alpha(s2), 0);
	printf("OK\n");

	printf("must return 1 for an empty string\n");
	assertIntEqual (ft_str_is_alpha(s3), 1);
	printf("OK\n");
    return (0);
}
