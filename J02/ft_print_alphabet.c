#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void){
    printf("abcdefghijklmnopqrstuvwxyz");
    return;
}


void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_recursive_alphabet(void)
{
	int	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

int main(){
    ft_print_alphabet();
    ft_print_recursive_alphabet();
    return(0);
};


// if we use gcc we need a main function so that the computer knows where to start 
// a workarround is to gcc -c flag

