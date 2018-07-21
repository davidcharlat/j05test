let "n = 0"
nfile=$(find j05 -type f ! -regex '.*/\..*' -printf "0"|wc -c)

for file in 'ft_strcpy' 'ft_strncpy' 'ft_strstr' 'ft_strcmp' 'ft_strncmp' 'ft_strupcase' 'ft_strlowcase' 'ft_strcapitalize' 'ft_str_is_alpha' 'ft_str_is_numeric'
do	
	if [ -f j05/ex0$n/$file.c ]
	then 
		gcc -o test$n $file.test.c j05/ex0$n/$file.c
		./test$n
		let "n = n + 1"
	fi
done
for file in 'ft_str_is_lowercase' 'ft_str_is_uppercase' 'ft_str_is_printable' 'ft_strcat' 'ft_strncat' 'ft_strlcat' 'ft_strlcpy' 'ft_putnbr_base' 'ft_atoi_base' 'ft_putstr_non_printable' 'ft_print_memory'
do	
	if [ -f j05/ex$n/$file.c ]
	then 
		gcc -o test$n $file.test.c j05/ex$n/$file.c
		./test$n
		let "n = n + 1"
	fi
done
if [ $n -eq $nfile ]
then
	echo "resultat = $n"
else
	echo "presence de fichiers autres que ceux specifies dans l'enonce -> resultat = 0"
fi
