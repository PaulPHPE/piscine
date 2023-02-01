#include <stdio.h>
#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	int	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}

int main(){
    ft_print_reverse_alphabet();
    return(0);
};


// if we use gcc we need a main function so that the computer knows where to start 
// a workarround is to gcc -c flag

