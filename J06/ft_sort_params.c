#include <stdio.h>
#include "ex00/libft.h"

void sortArrayAscii(int count, char **sortedArguments)
{
    int i;
    int sigue = 1;
    char temp;
    while (sigue == 1)
    {
        sigue = 0;
        for (i = 0; i < count - 1; i++)
        {
            if (ft_strcmp(sortedArguments[i], sortedArguments[i + 1]) > 0)
            {
                sigue = 1;
                char * temp = sortedArguments[i];
                sortedArguments[i] = sortedArguments[i + 1];
                sortedArguments[i + 1] = temp;
            }
        }
    }
}

int main(int argc, char **argv)
{
    int i;
    char **sortedArguments[argc - 1];

    for (i = 1; i < argc; i++)
    {
        sortedArguments[i - 1] = &argv[i];
    }

    sortArrayAscii(argc - 1, *sortedArguments);

    for (i = 0; i < argc - 1; i++)
    {
        printf("%s\n", *sortedArguments[i]);
    }

    return (0);
}