#include <string.h>
#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int index = 0;
    char temp;
    while (str[index])
    {
        printf("%c", str[index]);
        if ((int)(unsigned char)(str[index]) < 91 && (int)(unsigned char)(str[index]) > 64)
        {
            temp = (unsigned char)((int)(unsigned char)(str[index]) + 32);
            str[index] = temp;
            printf("%c", str[index]);
        }
        else
        {
            temp = str[index];
            str[index] = temp;
        }
        index ++;
    }
    return str;
}

int main()
{
    char str[] = "HELLO WOrdL!";
    
    printf("\n%s", ft_strlowcase(str));
    return 0;
}