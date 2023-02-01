#include <stdio.h>

void ft_print_combn(int nbr)
{
    int number[nbr];
    int index;
    if (nbr < 10)
    {
        for (index = 0; index < nbr; index++)
        {
            number[index] = index;
        }
        while (number[0] <= 10 - nbr)
        {
            int maxNumber = number[nbr - 1];

            while (maxNumber < 10)
            {
                for (int i = 0; i < nbr; i++)
                {
                    if (i == nbr - 1)
                    {
                        printf("%d", maxNumber);
                        maxNumber++;
                    }
                    else
                    {
                        printf("%d", number[i]);
                    }
                }
                if (number[0] != 10 - nbr)
                {
                    printf(", ");
                }
            }

            for (int i = 0; i < nbr; i++)
                number[i]++;
        }
    }
}

int main()
{
    ft_print_combn(2);
    //return (200);
};
