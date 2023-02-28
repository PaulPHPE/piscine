#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strdup(char *str)
{
    int size = 0;
    char *ptr;
    while (str[size]){       
        size ++;
    }
    ptr = (char *)malloc(size);
    
    int index = 0;
    while (str[index]){
        ptr[index] = str[index];
        index++;
    }
    return ptr;
}

int main()
{
    printf("proofTest\n");
    char str0[] = "proofGood";
    char *ptr0 = strdup(str0);
    printf("%s\n", ptr0);
    free(ptr0);
    printf("%s\n", ptr0);

 
    char str[] = "Chocolat";
    char *ptr = ft_strdup(str);
    printf("%s\n", ptr);
    free(ptr);
    printf("%s\n", ptr);

    
    return 0;
}