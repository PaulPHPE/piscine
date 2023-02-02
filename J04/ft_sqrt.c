#include <stdio.h>

int ft_sqrt(int nbr)
{
    int sqrt0 = 0;
    int sqrt1 = 0;
    int result = 0;

    while (sqrt1 * sqrt1 <= nbr)
    {
        sqrt0 = sqrt1;
        sqrt1 += 5;
    }

    for (int sqrt = sqrt0; sqrt < sqrt1; sqrt++)
    {
        if (sqrt * sqrt == nbr)
        {
            result = sqrt;
            return result;
        }
    }

    return result;
};

int main()
{
    printf("result: %d", ft_sqrt(1296));
    return 0;
}