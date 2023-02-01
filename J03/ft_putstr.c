#include <stdio.h>

void ft_putstr(char *ptrstr)
{
    printf("adress %p, char %c\n", ptrstr, *ptrstr);
    int index;
    index = 0;
    while (ptrstr[index])
    {
        printf("%c\n", ptrstr[index]);
        index++;
    }

    /* int counter;

    counter = 0;
    while (ptrstr[counter])
    {
        putchar(ptrstr[counter]);
        counter++;
    } */
}

int main()
{
    char str[] = "Hello Wolrd Chocolart Chaud";
    char *ptrstr = str;

    ft_putstr(ptrstr);
    return 0;
}