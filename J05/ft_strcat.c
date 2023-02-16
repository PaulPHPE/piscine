#include <string.h>
#include <stdio.h>

int	iss_printable(char c)
{
	if ((c > 31) && (c < 127))
		return (1);
	return (0);
}


char *ft_strcat(char* dest, char *src)
{
    int index = 0;
    int index2= 0;
    while (dest[index]){
        index++;
    }

    while (src[index2])
    {
        dest[index + index2] = src[index2];
        index2++;
    }
    dest[index + index2] = '\0';
    return dest;
}

int main()
{
    char str1[40] = "Salut ";
    char str2[] = "monde!";

    printf("ft_strcat \n %s", ft_strcat(str1, str2));
    return 0;
}