#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    printf("adr1 = %p content adr1 = %p\n", &nbr, nbr);
    printf("adr2 = %p content adr2 = %p\n", &*nbr, *nbr);
    printf("adr3 = %p content adr3 = %p\n", &**nbr, **nbr);
    printf("adr4 = %p content adr4 = %p\n", &***nbr, ***nbr);
    printf("adr5 = %p content adr5 = %p\n", &****nbr, ****nbr);
    printf("adr6 = %p content adr6 = %p\n", &*****nbr, *****nbr);
    printf("adr7 = %p content adr7 = %p\n", &******nbr, ******nbr);
    printf("adr8 = %p content adr8 = %p\n", &*******nbr, *******nbr);
    printf("adr9 = %p content adr9 = %p\n", &********nbr, ********nbr);
    printf("adr10 = %p content adr10 = %d\n", &*********nbr, *********nbr);

    printf("a = %d\n", *********nbr);
    *********nbr = 42;
    printf("a = %d\n", *********nbr);
}

int main()
{
    int a = 12;
    int *b = &a;
    int **c = &b; 
    int ***d = &c; 
    int ****e = &d;
    int *****f = &e;
    int ******g = &f; 
    int *******h = &g; 
    int ********i = &h;
    int *********ptr = &i;
    
    ft_ultimate_ft(ptr);
    return(0);
};
