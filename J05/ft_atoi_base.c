#include <string.h>
#include <stdio.h>

int findIndex(char value, char *base)
{
    int index = 0;
    int result = -1;
    while (base[index])
    {
        if (base[index] == value)
        {
            result = index;
            break;
        }
        index++;
    }
    return result;
}

int puissance(int nbr, int psc)
{
    int result = 0;
    for (int index = 0; index <= psc; index++){
        if (index == 0){
            result = 1; 
        } else {
            result = result * nbr;
        }
    }
    return result;
}

int ft_atoi_base(char *str, char *base)
{
    // Check Base
    int baseSize = 0;
    printf("base : ");
    while (base[baseSize])
    {
        printf("%c", base[baseSize]);
        // + - can't be symbols of the base
        if (base[baseSize] == 43 || (int)(unsigned char)(base[baseSize]) == 45)
        {
            return 0;
        }
        baseSize++;
    }
    printf("\n");

    printf("baseSize : %d \n", baseSize);
    // the base can't be empty or of size 1
    if (baseSize < 2)
    {
        return 0;
    }

    // We can't have twice the same char in a base
    int index1;
    int index2;
    for (int index1 = 0; index1 < baseSize - 1; index1++)
    {
        index2 = index1 + 1;
        while (base[index2])
        {
            if (base[index1] == base[index2])
            {
                return 0;
            }
            index2++;
        }
    }

    // Check the number can't be empty
    int strSize = 0;
    while (str[strSize])
    {
        strSize++;
    }
    if (strSize == 0)
    {
        return 0;
    }

    // Create number in base 10
    int strIndex;
    int indexInBase;
    int temp;
    int result = 0;
    for (strIndex = strSize - 1; strIndex > 0; strIndex--)
    {
        temp = strSize - 1 - strIndex;
        indexInBase = findIndex(str[strIndex], base);
        if (indexInBase < 0)
        {
            return 0;
        }
        printf("%d * %d ^ %d = ", indexInBase, baseSize, temp);
        result += indexInBase * puissance(baseSize, temp);
        printf("%d \n", indexInBase * puissance(baseSize, temp));
    }
    if (str[0] == '-'){
        result = -result;
    } else {
        printf("%d * %d ^ %d = ", indexInBase, baseSize, strSize - 1);
        indexInBase = findIndex(str[strIndex], base);
        result += indexInBase * puissance(baseSize, strSize - 1);
        printf("%d \n", indexInBase * puissance(baseSize, strSize - 1));
    }
    
    return result;
}

int main()
{
    char base[] = "0123456789ABCDEF";
    char str[] = "B3562";
    printf("\nresult : %d", ft_atoi_base(str, base));

    return 0;
}