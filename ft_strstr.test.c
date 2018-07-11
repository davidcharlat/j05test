#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);

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
    char str[] = "cc2Lc2L ac2La c2Lc2Lc2La2a";
	char to_find1[] = "c2Lc2La";
	char to_find15[] = "c2L";
	char to_find2[] = "ok";
	char to_find3[] = "";
	
	printf("must be able to find string, even \"c2Lc2La\" amidst \" ...c2Lc2Lc2La... )\"\n");
	assertIntEqual ((ft_strstr(str, to_find1) - str), 17);
	printf("OK\n");
		
	printf("must find the first occurs of the string to find\n");
	assertIntEqual (ft_strstr(str, to_find15) - str, 1);
	printf("OK\n");
	
	printf("must return \"str\" if *to_find == \"\"\n");
	assertIntEqual (ft_strstr(str, to_find3) - str, 0);
	printf("OK\n");
	
	printf("must return 0 if the string to find can't be found\n");
	assertIntEqual (ft_strstr(str, to_find2) - 0, 0);
	printf("OK\n");
    return (0);
}
