#include <stdio.h>

void ft_is_negative(int a)
{
	if (a < 0)
	{
		putchar('N');
	} else {
        putchar('P');
    }
}

int main(){
    ft_is_negative(-10);
    return(0);
};
