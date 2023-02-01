#include <stdio.h>

void ft_putnbr(int nbr)
{
    if(nbr < 0){
        putchar(45);
        nbr = -nbr;
    }
    if (nbr / 10 != 0)
        ft_putnbr(nbr / 10);
    putchar((nbr % 10) + '0');
}

int main(){
    ft_putnbr(-12);
    return(0);
};
