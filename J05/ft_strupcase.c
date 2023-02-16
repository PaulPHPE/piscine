#include <string.h>
#include <stdio.h>

char *ft_strupcase(char *str)
{
    int index = 0;
    char temp;
    while (str[index])
    {
        printf("%c", str[index]);
        if ((int)(unsigned char)(str[index]) < 123 && (int)(unsigned char)(str[index]) > 96)
        {
            temp = (unsigned char)((int)(unsigned char)(str[index]) - 32);
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
    char str[] = "hello World!";
    
    printf("\n%s", ft_strupcase(str));
    return 0;
}