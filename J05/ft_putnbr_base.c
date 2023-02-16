#include <string.h>
#include <stdio.h>

void ft_putnbr_base(int nbr, char *base)
{
    int baseSize = 0;
    printf("nbr : %d \n", nbr);
    printf("base : ");
    while (base[baseSize])
    {
        printf("%c", base[baseSize]);
        baseSize++;
    }
    printf("\n");

    printf("baseSize : %d \n", baseSize);

    if (nbr < 0)
    {
        printf("-");
    }
    else if (nbr == 0)
    {
        printf("%c", base[0]);
        return;
    }

    int temp;
    char tempResult[100];
    int index = 0;

    while (nbr > 0)
    {
        temp = nbr % baseSize;
        tempResult[index] = base[temp];
        index++;
        nbr = nbr / baseSize;
    }

    for (int index2 = index; index2 >=0; index2--){
        printf("%c", tempResult[index2]);
    }
    return;
}


int main()
{
    char base[] = "poneyvif";
    int nbr = 0;
    ft_putnbr_base(nbr, base);

    return 0;
}