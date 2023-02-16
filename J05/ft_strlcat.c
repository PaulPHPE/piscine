#include <string.h>
#include <stdio.h>

int iss_printable(char c)
{
    if ((c > 31) && (c < 127))
        return (1);
    return (0);
}

unsigned int ft_strlcat(char *dest, char *src, int nbr)
{
    int index = 0;
    int index2 = 0;
    int temp = 0;
    while (dest[index])
    {
        index++;
        temp++;
    }

    while (src[index2])
    {
        if (index < nbr - 1) // no need to minus 1 because both indexes starts at 0
        {
            dest[index] = src[index2];
            index++;
        }
        index2++;
        temp++;
    }


    if (index < nbr - 1)
    {
        dest[index] = '\0';
        index ++;
    }

    return temp;
}

int main()
{
    char str1[40] = "Salut ";
    char str2[] = "monde!";

    
    printf("strlcat \n %lu \n", strlcat(str1, str2, 40));
    printf("str1 \n %s \n", str1);
    printf("ft_strlcat \n %u \n", ft_strlcat(str1, str2, 40));
    printf("str1 \n %s \n", str1);

    return 0;
}