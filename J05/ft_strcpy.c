#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *dst, const char *src){
    int index = 0;
    while (src[index]){
        dst[index] = src[index];
        index ++;
    }
    return dst;
}

int main()
{
    char str[] = "Hello World edqs";
    char dstTest[100];
    char dstProof[100];

    char *ptrstr = str;
    ft_strcpy(dstTest, str);
    strcpy(dstProof, str);
    printf("strcpy : %s\n", dstProof);
    printf("ft_strcpy : %s\n", dstTest);
    return 0;
}