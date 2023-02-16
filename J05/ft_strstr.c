#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, const char *tofind)
{
    int index = 0;
    int indexToFind = 0;
    char *result;
    int found = 0;
    while (str[index])
    {
        found = 1;
        while (tofind[indexToFind])
        {
            if (tofind[indexToFind] != str[index + indexToFind])
            {
                found = 0;
            }
            indexToFind++;
        }
        if (found == 1)
        {
            break;
        }
        indexToFind = 0;
        index++;
    }
    if (found == 0)
    {
        return NULL;
    }
    result = &str[index];
    return result;
}

int main()
{
    char str[] = "Hello World Bar";
    char str2[] = "";
    char *ptr;

    ptr = strstr(str, str2);
    printf("strstr : %s\n", ptr);

    ptr = ft_strstr(str, str2);
    printf("ft_strstr : %s\n", ptr);
    return 0;
}