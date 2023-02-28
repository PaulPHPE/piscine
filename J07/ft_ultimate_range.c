#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **ft_range, int min, int max)
{
    printf("ft_range %p\n", ft_range);
    int size = max - min;
    int *array;
    if (size <= 0)
    {
        array = NULL;
        return 0;
    }

    int i = 0;
    array = (int *)malloc(sizeof(int) * (max - min));
    while (min < max)
    {
        array[i] = min;
        min++;
        i++;
    }
    *ft_range = array;
    printf("ft_range %p\n", ft_range);
    printf("*ft_range %p\n", *ft_range);
    printf("**ft_range %d\n", **ft_range);
    return i;
}

int main()
{
    int min = 100;
    int max = 990;
    int nbr = 0;
    /* int **main_range = (int **)malloc(sizeof(int *));
    ft_ultimate_range(main_range, min, max); */
    int *main_range;
    ft_ultimate_range(&main_range, min, max);

    printf("main_range %p\n", main_range);
    printf("*main_range %d\n", *main_range);
    
    //free(*main_range);
    //free(main_range);
    free(main_range);

    return (0);
}