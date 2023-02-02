#include <stdio.h>

int ft_fibonacci(int index)
{
    int sum1 = 0;
    int sum2 = 1;
    int temp;
    for(int i = 0; i <= index; i++)
    {
        temp = sum1 + sum2;
        sum1 = sum2;
        sum2 = temp;
    }
    return sum2;
};

int main()
{
    printf("result: %d", ft_fibonacci(23));
    return 0;
}