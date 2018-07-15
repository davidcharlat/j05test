#!/bin/bash
export  J05="https://github.com/davidcharlat/j05"
git clone $J05
let "n = 0"
for file in 'ft_strcpy' 'ft_strncpy' 'ft_strstr' 'ft_strcmp' 'ft_strncmp' 'ft_strupcase'
do	
	if [ -f j05/ex0$n/$file.c ]
	then 
		gcc -o test$n $file.test.c j05/ex0$n/$file.c
		./test$n
		let "n = n + 1"
	fi
done


