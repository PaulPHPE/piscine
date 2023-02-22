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
}
