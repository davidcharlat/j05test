#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi_base(char *str, char *base);
int     ft_is_base_ok(char *base);
int	check_and_numerize_str(char *str,char *base, int *result, int size);
int	is_signed(char *str);

void    assertIntEqual(int expected, int received)
{
    if (expected != received)
    {
        fprintf(stderr, "INTEGER_NOT_EQUAL : expecting %d - received %d.\n", expected, received);
        exit(1);
    }
}

int     main ()
{
	char	*str[11] = {"david c", "-david c", "+david c", "", "125r4", "123", "123", "122", "123", "123", "123"};
	char	*base[11] = {"abcdefghijklmnopqrstuvwxyz ","abcdefghijklmnopqrstuvwxyz ","abcdefghijklmnopqrstuvwxyz ", "0123456789", "0123456789","", "1", "12", "12+3", "-123", "121"};
	int	res[11] = {1173582083,-1173582083,1173582083,0,0,0,0,3,0,0,0};
	char	*comment[11] = {"unsigned str", "negative str", "positive str", "empty str", "str containing a char not include in base", "base size =0", "base size =1", "base size =2", "base containing a '+' char", "base containing a '-' char", "base containing 2 equals chars"};
	int i=0;
	
	while (i<11)
	{
		printf ("case of %s: as str is %s and base %s, result must be %d\n", comment[i], str[i], base[i], res[i]);
		assertIntEqual(res[i], ft_atoi_base (str[i], base[i]));
		printf("OK\n");
		i++;
	}
	return (0);
}
