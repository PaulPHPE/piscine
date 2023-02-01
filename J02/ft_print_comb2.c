#include <stdio.h>

void ft_print_comb2()
{
    int number[2] = {0, 1};
	
    while (number[0] < 99){
        if (number[1] <= 99){
            if (number[0] < 10){
                printf("0%d ", number[0]);
            } else {
                printf("%d ", number[0]);
            }
            if (number[1] < 10){
                printf("0%d", number[1]);
            } else {
                printf("%d", number[1]);
            }
            
            if (number[0] != 98){
                printf(", ");
            }
            number[1]++ ;
        } else {
            number[0]++ ;
            number[1] = number[0]+1 ;
        }
    }
}

int main(){
    ft_print_comb2();
    return(0);
};
