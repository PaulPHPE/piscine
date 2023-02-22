#include <stdio.h>
#include "ex00/libft.h"

void ft_putchar(char c);

int main(int argc, char **argv)
{
    /* printf("Executable name: %s\n", argv[0]);

    printf("This is %s() from %s",
        __FUNCTION__, __FILE__); */

    int i;

    i = 0;
    argc = 0;
    while (argv[0][i])
    {
        ft_putchar(argv[0][i]);
        i++;
    }

    return (0);
}