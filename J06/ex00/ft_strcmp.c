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
