#include <stdio.h>

char *ft_strrev(char *ptrstr)
{
    // GET THE LENGTH OF THE STRING
    int length;
    length = 0;
    while (ptrstr[length])
    {
        length++;
    }

    // INVERSE THE LETTERS
    int index;
    char *ptrfirst;
    char *ptrsecond;
    char temp;

    for (index = 0; index < length / 2; index++)
    {
        ptrfirst = &ptrstr[index];
        ptrsecond = &ptrstr[length - index - 1];
        temp = *ptrfirst;
        *ptrfirst = *ptrsecond;
        *ptrsecond = temp;
    };

    // PRINT THE NEW STRING
    int i;
    char newStr[length];
    i = 0;
    while (ptrstr[i])
    {
        newStr[i] = ptrstr[i];
        printf("%c", ptrstr[i]);
        i++;
    }
    char * pointerNewStr = newStr;
    return pointerNewStr;
}

int main()
{
    char str[] = "chocolat";
    char *ptrstr = str;

    char *newString = ft_strrev(ptrstr);
    return 0;
}