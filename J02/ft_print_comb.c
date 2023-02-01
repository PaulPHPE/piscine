#include <stdio.h>

void ft_print_comb()
{
    int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index;
    int index2;
    int index3;
	
    for ( index = 0; index < sizeof(numbers)/sizeof(numbers[0]) - 2; index ++){
        for (index2 = index + 1; index2 < sizeof(numbers)/sizeof(numbers[0]) - 1; index2 ++){
            for (index3 = index2+1; index3 < sizeof(numbers)/sizeof(numbers[0]); index3 ++){
                printf("%d%d%d, ", numbers[index], numbers[index2], numbers[index3]);
            }    
        }   
	}
}

int main(){
    ft_print_comb();
    return(0);
};
