#include <stdio.h>


int mcd(int a, int b){

    int resto = a%b;
    if(resto == 0) return b;

    return mcd(b, resto);
}

int main() {
    int a = 9;
    int b = 3;

    printf("El MCD entre %i y %i es %d\n", a, b, mcd(a,b));
    return 0;
}