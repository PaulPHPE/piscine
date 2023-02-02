#include <stdio.h>

int ft_is_prime(int nbr)
{
    int boolean = 1;
    for(int i = 2; i <= nbr/2; i++)
    {
        if (nbr % i == 0){
            boolean =0;
        }
    }
    return boolean;
};

int main()
{
    int a;
    printf("enter a number \n");
    scanf("%d", &a);
    printf("Is %d prime (1 true, 0 false): %d",a, ft_is_prime(a));
    return 0;
}