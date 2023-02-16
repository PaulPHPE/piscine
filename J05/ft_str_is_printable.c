#include <string.h>
#include <stdio.h>

int	iss_printable(char c)
{
	if ((c > 31) && (c < 127))
		return (1);
	return (0);
}


int ft_str_is_printable(char *str)
{
    int index = 0;

    while (str[index])
    {
        if (iss_printable(str[index]) == 0)
        {
            return 0;
        }
        index++;
    }
    return 1;
}

int main()
{
    char str[] = "salut toi beau gosse";

    printf("ft_str_is_printable %d", ft_str_is_printable(str));
    return 0;
}