#include <stdio.h>

void ft_strlen(char *ptrstr)
{
    int index;
    index = 0;
    while (ptrstr[index])
    {
        index++;
    }
    printf("%d", index);
    return;
}
