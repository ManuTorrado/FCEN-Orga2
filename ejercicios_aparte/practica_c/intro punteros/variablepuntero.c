/*
Escribe un programa en C que:

Declare una variable entera e inicialízala con un valor.

Declare un puntero que apunte a esa variable.

Modifique el valor de la variable a través del puntero.

Imprima el valor de la variable antes y después de modificarla con el puntero.


*/
#include <stdio.h>


int main(){
    
    int numero = 10;
    printf("valor antes: %d\n", numero);
    int* puntero = &numero;

    *puntero = 5;
    printf("valor despues: %d\n", numero);

}