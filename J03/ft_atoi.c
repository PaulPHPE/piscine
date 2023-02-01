#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int ft_atoi(const char *ptrstr)
{
    int index = 0;
    int sum = 0;
    int sign = 1;
    while (ptrstr[index])
    {
        if (isdigit(ptrstr[index]) != 0)
        {
            sum = (sum * 10) + (ptrstr[index] - '0');
        }
        else if ((index == 0) && (ptrstr[index] == '-'))
        {
            sign = -1;
        }
        else
        {
            return sum * sign;
        }
        index++;
    }
    return sum * sign;
}

int main()
{
    char str[] = "-123FR3";
    char *ptrstr = str;

    printf("Atoi real : %d\n", atoi(ptrstr));
    printf("Atoi construct : %d\n", ft_atoi(ptrstr));

    return 0;
}