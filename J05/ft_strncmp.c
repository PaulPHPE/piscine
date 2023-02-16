#include <string.h>
#include <stdio.h>

int ft_strncmp(char *str1, char *str2, unsigned int n)
{
    int index = 0;
    while ((str1[index] || str2[index]) && index < n)
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
    char str1[]="gAbcdeg\200";
    char str2[]="fabcdef\0";

    printf("strcmp : %d\n", strncmp(str1, str2, 6));
    printf("ft_strcmp : %d\n", ft_strncmp(str1, str2, 6));
    return 0;
}