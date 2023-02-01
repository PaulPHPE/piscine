#include <stdio.h>

void ft_swap(int *ptra, int *ptrb)
{
    printf("Initially : a = %d, b = %d\n", *ptra, *ptrb);
    int tempa = *ptra;
    *ptra = *ptrb;
    *ptrb = tempa;
    printf("Initially : a = %d, b = %d\n", *ptra, *ptrb);
}

int main()
{
    int a = 24;
    int b = 42;

    ft_swap(&a, &b);
    return 0;
}