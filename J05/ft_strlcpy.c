#include <string.h>
#include <stdio.h>

int iss_printable(char c)
{
    if ((c > 31) && (c < 127))
        return (1);
    return (0);
}

unsigned int ft_strlcpy(char *dest, char *src, int nbr)
{
    int index = 0;
    int result = 0;

    while (src[index])
    {
        if (index < nbr - 1) // no need to minus 1 because both indexes starts at 0
        {
            dest[result] = src[index];
            result++;
        }
        index ++;
    }
    dest[result] = '\0';

    return index;
}

int main()
{
    char str1[12];
    char str2[] = "monde!dfhsfghdgfsdfgsfdghdgc";

    printf("ft_strlcpy \n %u \n", ft_strlcpy(str1, str2, 12));
    printf("str1 \n %s \n", str1);
    printf("strlcpy \n %lu \n", strlcpy(str1, str2, 12));
    printf("str1 \n %s \n", str1);

    return 0;
}