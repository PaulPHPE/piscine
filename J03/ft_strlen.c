#include <stdio.h>

void ft_strlen(char *ptrstr)
{
    int index;
    index = 0;
    while (ptrstr[index])
    {
        index++;
    }
    printf("string length = %d", index);
}

int main()
{
    char str[] = "Hello Wolrd Chocolart Chaud";
    char *ptrstr = str;
    printf("string length = %lu\n", sizeof(str) / sizeof(str[0]));
    /*printf("last char : %c\n", str[27]);*/

    ft_strlen(ptrstr);
    return 0;
}