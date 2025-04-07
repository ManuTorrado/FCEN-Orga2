/*
Escribe un programa en C que:

Declare un array de enteros con algunos valores inicializados.

Use un puntero para recorrer el array y sumar todos sus elementos.

Imprima la suma total de los valores del array.
*/

int sumaPunteros(int* a, int* b){

    int res = *a + *b;

    return res;

}

int main(){
    int a = 5;
    int b = 3;

    int numeros[5] = {1, 2, 3, 4, 5};  // Asigna valores directamente
   
    int res = numeros[0];
    for (int i = 1; i < sizeof(numeros); i++)
    {
        res += numeros[i];
    }
    

    int result = sumaPunteros(&a, &b);

    printf("%d\n", result);

    return 0;
}