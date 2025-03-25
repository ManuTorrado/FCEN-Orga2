/*Escribe un programa en C que:

Declare dos variables enteras e inicialízalas con valores diferentes.

Declare una función llamada intercambiar que reciba dos punteros a enteros e intercambie sus valores.

Imprima los valores antes y después del intercambio.*/
#include <stdio.h>

void intercambiar(int* ptr1, int* ptr2 ){

    int* aux = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = aux;

}


int main(){
    int a = 5;
    int b = 10;

    printf("valores antes: %d y %d\n", a, b);

    intercambiar(&a, &b);

    printf("valores despues: %d y %d\n", a, b);

    return 0;
}