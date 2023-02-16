#include <string.h>
#include <stdio.h>

int isLowLetter(char c)
{
    if ((int)(unsigned char)(c) < 123 && (int)(unsigned char)(c) > 96)
    {
        return 1;
    }
    return 0;
}

int isCapital(char c)
{
    if ((int)(unsigned char)(c) < 91 && (int)(unsigned char)(c) > 64)
    {
        return 1;
    }
    return 0;
}

int isNumber(char c)
{
    if ((int)(unsigned char)(c) < 58 && (int)(unsigned char)(c) > 47)
    {
        return 1;
    }
    return 0;
}

char *ft_strcapitalize(char *str)
{
    int index = 0;
    char temp;

    while (str[index] && str[index + 1])
    {
        if (index == 0 && isLowLetter(str[index]) == 1)
        {
            temp = (unsigned char)((int)(unsigned char)(str[index]) - 32);
            str[index] = temp;
            printf("%c", str[index + 1]);
        }
        else if ((isLowLetter(str[index]) + isCapital(str[index]) + isNumber(str[index])) == 0)
        {
            if (isLowLetter(str[index + 1]) == 1)
            {
                temp = (unsigned char)((int)(unsigned char)(str[index + 1]) - 32);
                str[index + 1] = temp;
                printf("%c", str[index + 1]);
            }
        }
        index++;
    }
    return str;
}

int main()
{
    char str[] = "salut, comment ca va ? 42mots, quarante-deux; cinquante+et+un";

    printf("\n%s", ft_strcapitalize(str));
    return 0;
}