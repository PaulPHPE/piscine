#include <stdio.h>

void ft_ft(int *nbr)
{
    printf("a = %d\n", *nbr);
    *nbr = 42;
    printf("a = %d\n", *nbr);
}

int main()
{
    int a = 12;
    ft_ft(&a);
};
