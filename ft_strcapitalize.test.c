#include <stdio.h>
#include <stdlib.h>

char	*ft_strcapitalize(char *str);

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
	char origin1[] = "ade[eJ{er`er@ERerpo/fGGr kj+5gt+TTtT-lM";
	char src1[] = "ade[eJ{er`er@ERerpo/fGGr kj+5gt+TTtT-lM";
	char result1[] = "Ade[Ej{Er`Er@Ererpo/Fggr Kj+5gt+Tttt-Lm";
	char origin2[] = "a12 de   f aER4de aSz";
	char src2[] = "a12 de   f aER4de aSz";
	char result2[] = "A12 De   F Aer4de Asz";

	ft_strcapitalize(src1);
	ft_strcapitalize(src2);
	printf("Since source char is \"%s\", destination should be \"%s\"\n", origin1, result1);
	assertStringEqual(result1, src1);
	printf("OK\n");
	printf("Since source char is \"%s\", destination should be \"%s\"\n", origin2, result2);
	assertStringEqual(result2, src2);
	printf("OK\n");
	return (0);
}
