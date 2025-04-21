
#include <stdio.h>

/*

Realizar un programa que calcule el factorial de un numero entero positivo. Para esto,
usar una funcion que reciba el numero y devuelva el resultado.


*/

int factorial(int n);

int main(){

    int fact = factorial(5);
    printf("%d\n", fact);
    return 0;
}

int factorial(int n){

    if(n == 0){
        return 1;
    }

    if(n == 1){
        return 1;
    }

    return n*factorial(n-1);
}