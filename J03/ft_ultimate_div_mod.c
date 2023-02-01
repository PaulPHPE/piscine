#include <stdio.h>

void ft_ultimate_div_mod(int *ptra, int *ptrb)
{
    printf("divide: %d by: %d\n", *ptra, *ptrb);
    int q = *ptra / *ptrb; 
    int rest = *ptra % *ptrb;

    *ptra = q; 
    *ptrb = rest; 

    printf("quotien: %d, reste: %d", *ptra, *ptrb);
}

int main()
{
    int a;
    int b;
    int *ptra;
    int *ptrb;

    printf("Enter 2 numbers\n");
    scanf("%d %d",&a,&b);
    if (b==0)
        printf("we can't divide by 0");
    else
    {
        ptra = &a;
        ptrb = &b;
        ft_ultimate_div_mod(ptra, ptrb);
    }
    return 0;

};
