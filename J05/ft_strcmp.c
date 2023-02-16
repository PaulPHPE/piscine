#include <string.h>
#include <stdio.h>

int ft_strcmp(char *str1, char *str2)
{
    int index = 0;
    while (str1[index] || str2[index])
    {
        if (str1[index] > str2[index]){
            return (int)(unsigned char)(str1[index]) - (int)(unsigned char)(str2[index]);
        } 
        if (str1[index] < str2[index]){
            return (int)(unsigned char)(str1[index]) - (int)(unsigned char)(str2[index]);
        } 
        index ++;
    }
    return 0;
} 

int main()
{
    char str1[]="A\200";
    char str2[]="A\0";

    printf("strcmp : %d\n", strcmp(str1, str2));
    printf("ft_strcmp : %d\n", ft_strcmp(str1, str2));
    return 0;
}