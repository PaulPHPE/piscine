#include <stdio.h>

int ft_find_next_prime(int nbr)
{
    int nextPrime = nbr;
    int prime = 0;

    while (prime == 0)
    {
        for (int i = 2; i <= nextPrime / 2; i++)
        {
            if (nextPrime % i == 0)
            {
                prime = 0;
                nextPrime ++;
                break;
            }
            prime = 1;
        }
    }

    return nextPrime;
};

int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    printf("First prime number: %d", ft_find_next_prime(a));
    return 0;
}