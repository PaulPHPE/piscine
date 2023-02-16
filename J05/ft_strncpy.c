#include <string.h>
#include <stdio.h>

char *ft_strncpy(char *dst, const char *src, unsigned int nbr)
{
    int index;
    for (index = 0; index < nbr; index++)
    {
        if (src[index])
        {
            dst[index] = src[index];
        }
        else
        {
            dst[index] = '\0';
        }
    }
    return dst;
}

int main()
{
    char str[] = "Hello World edqsdddqxc";
    char dstTest[100];
    char dstProof[100];

    char *ptrstr = str;
    ft_strncpy(dstTest, str, 10);
    strncpy(dstProof, str, 10);
    printf("strncpy : %s\n", dstProof);
    printf("ft_strncpy : %s\n", dstTest);
    return 0;
}