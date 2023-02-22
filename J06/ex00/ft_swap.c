#include <stdio.h>

void ft_swap(int *ptra, int *ptrb)
{  
    int tempa = *ptra;
    *ptra = *ptrb;
    *ptrb = tempa;
    return;
}
