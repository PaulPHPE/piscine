#include <stdio.h>

void ft_print_numbers_version1(void)
{
	int	number;
    number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
}

int main(){
    ft_print_numbers_version1();
    return(0);
};
