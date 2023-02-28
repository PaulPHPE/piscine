#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int size = max - min + 1;
    if (size <= 0)
    {
        int * pInt = NULL;
        return pInt;
    }
    int result[size];
    int index;
    int value = min;
    for (index = 0; index < size; index++)
    {
        result[index] = value + index;
    }

    int *ptr = (int *)malloc(sizeof(result));
    for (index = 0; index < size; index++)
    {
        ptr[index] = result[index];
    }
    return ptr;
}

int main()
{
    int min = 10;
    int max = 9;
    int *ptr = ft_range(min, max);
    return (0);
}