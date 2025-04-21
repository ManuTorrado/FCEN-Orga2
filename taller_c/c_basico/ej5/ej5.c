#include <stdio.h>

/*
Realizar un programa que imprima el valor de 0.1 como float y como double. Luego,
realizar un cast de float a int y de double a int.
*/

int main(){
    const float mi_float = 0.1;
    const double mi_double = 0.1;
    printf("valor de float: %f\n", mi_float);
    printf("valor de double: %f\n", mi_double);
    printf("--------------\n");
    printf("valor de float casteado a int: %d\n", (int)mi_float);
    printf("valor de double casteado a int: %d\n", (int)mi_double);
    return 0;
}