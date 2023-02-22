#include <stdio.h>
void ft_putchar(char c);

int main(int argc, char **argv)
{
    /* printf("Executable name: %s\n", argv[0]);

    printf("This is %s() from %s",
        __FUNCTION__, __FILE__); */

    int i;

    for (i = argc - 1; i > 0; i--)
    {
        printf("%s\n", argv[i]);
    }

    return (0);
}