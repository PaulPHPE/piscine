#include <stdio.h>

int ft_recursive_power(int nbr, int power)
{
    int sum = 1; 
    int temp = 1;
    if (power < 0)
    {
        return 0;
    }
    else if (power == 1){
        return nbr;
    }
    else
    {
        sum = nbr * ft_recursive_power(nbr, power - 1);
    } 
    return sum;
};

int main()
{
    printf("%d", ft_recursive_power(3, 4));
    return 0;
}