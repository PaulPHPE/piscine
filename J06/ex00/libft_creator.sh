#!/bin/bash

for i in *.c; do
    gcc -c ${i%}
done

declare functions=""

for j in *.o; do
    functions="${functions} ${j%}"
done

ar rc libft.a ${functions}


for k in *.o; do
    rm ${k%}
done
ranlib libft.a

gcc library_test.c -L. -lft -o library_test
