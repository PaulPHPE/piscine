#include <stdio.h>

int ft_iterative_power(int nbr, int power)
{
    int sum = 1; 
    int temp = 1;
    if (power < 0)
    {
        return 0;
    }
    else
    {
        for (int index = 0; index <= power; index++)
        {
            if (index == 0)
            {
                sum = 1;
            }
            else
            {
                sum *= nbr;
            }
        };
    } 
    return sum;
};

int main()
{
    printf("%d", ft_iterative_power(10, 2));
    return 0;
}