#include <stdio.h>

int ft_iterative_factorial(int nbr)
{
    int sum = 1;
    if (nbr < 0)
    {
        sum = 0;
    }
    else
    {
        for (int index = 0; index <= nbr; index++)
        {
            if (index == 0)
            {
                sum *= 1;
            }
            else
            {
                sum *= index;
            }
        };
    }
    return sum;
};

int main()
{
    for (int index = 0; index < 10; index++)
    {
        printf("%d factoriel: %d\n",index, ft_iterative_factorial(index));
    }
    return 0;
}