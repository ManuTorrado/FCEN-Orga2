#include <stdio.h>


int factorial(n){
    if(n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }

    return n * factorial(n-1);
}

int main() {
    int num = 5;
    printf("El factorial de %d es %d\n", num, factorial(num));
    return 0;
}