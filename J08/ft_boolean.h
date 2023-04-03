#include <unistd.h>

int SUCCESS = 0;
char EVEN_MSG[] = "J'ai un nombre pair d'arguments.";
char ODD_MSG[] = "J'ai un nombre impair d'arguments.";

typedef enum { FALSE = 0, TRUE = !FALSE } t_bool;

int EVEN(int nbr){
    return((nbr % 2 == 1)? 0 : 1);
}