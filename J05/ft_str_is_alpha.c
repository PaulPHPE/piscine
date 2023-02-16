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

int ft_str_is_alpha(char *str)
{
    int index = 0;

    while (str[index])
    {
        if (isLowLetter(str[index]) + isCapital(str[index]) == 0)
        {
            // to take spaces into account :
            if ((int)(unsigned char)(str[index]) != 32)
            {
                return 0;
            }
        }
        index++;
    }
    return 1;
}

int main()
{
    char str[] = "salut";

    printf("ft_str_is_alpha %d", ft_str_is_alpha(str));
    return 0;
}