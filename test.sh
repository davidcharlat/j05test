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
if [ $n -eq $nfile ]
then
	echo "resultat = $n"
else
	echo "presence de fichiers autres que ceux specifies dans l'enonce -> resultat = 0"
fi
