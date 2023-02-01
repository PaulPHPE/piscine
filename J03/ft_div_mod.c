#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    int q = a/b; 
    int rest = a%b;

    *div = q; 
    *mod = rest; 

    printf("quotien: %d, reste: %d", q, rest);
}

int main()
{
    int a;
    int b;
    int c = 12; 
    int d = 13; 
    int * ptr1 = &c; 
    int * ptr2 = &d;

    printf("Enter 2 numbers\n");
    scanf("%d %d",&a,&b);
    if (b==0)
        printf("we can't divide by 0");
    else
    {
        ft_div_mod(a, b, ptr1, ptr2);
    }
    return 0;

};
