#include <string.h>
#include <stdio.h>

int isNumber(char c)
{
    if ((int)(unsigned char)(c) < 58 && (int)(unsigned char)(c) > 47)
    {
        return 1;
    }
    return 0;
}

int ft_str_is_numeric(char *str)
{
    int index = 0;

    while (str[index])
    {
        if (isNumber(str[index]) == 0)
        {
            return 0;
        }
        index++;
    }
    return 1;
}

int main()
{
    char str[] = "";

    printf("ft_str_is_numeric %d", ft_str_is_numeric(str));
    return 0;
}