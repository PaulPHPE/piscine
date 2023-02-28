#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_size_params(int argc, char **argv)
{
    int full_size_argv;
    int i;
    int z;

    i = 1;
    z = 0;
    full_size_argv = 0;
    while (i < argc)
    {
        while (argv[i][z])
            z++;
        full_size_argv += z;
        full_size_argv++;
        z = 0;
        i++;
    }
    return (full_size_argv);
}

char *ft_concat_params(int argc, char **argv)
{
    int i;
    int index;
    int zIndex;
    int stringSize = get_size_params(argc, argv);
    char *arg = (char *)malloc(stringSize);

    i = 0;
    index = 1;
    zIndex = 0;
    while (argv[index])
    {
        while (argv[index][zIndex])
        {
            arg[i] = argv[index][zIndex];
            zIndex++;
            i++;
        }

        zIndex = 0;
        if (index < argc - 1)
        {
            arg[i] = '\n';
            i++;
        }
        else
        {
            arg[i] = '\0';
            i++;
        }
        index++;
    }
    return arg;
}

int main(int argc, char **argv)
{
    /* printf("Executable name: %s\n", argv[0]);

    printf("This is %s() from %s",
        __FUNCTION__, __FILE__); */
    char *arg = ft_concat_params(argc, argv);
    printf("%s", arg);
    free(arg);

    return (0);
}