/*

Lo mismo que el 1 pero mediante una funcion

*/
#include <stdio.h>

void cambiarValor(int* ptr){
    *ptr = 5;
}

int main(){
    
    int numero = 10;
    printf("valor antes: %d\n", numero);

    cambiarValor(&numero);

    printf("valor despues: %d\n", numero);

}