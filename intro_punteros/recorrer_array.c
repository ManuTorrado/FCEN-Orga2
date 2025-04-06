/*

Recorrer array usando punteros

*/

int main(){

    int lista[] = {3,6,7,1,2};
    int *ptr = lista;
    for (ptr; ptr < lista + 5; ptr++)
    {
       printf("Valor: %d\n", *(ptr));
    }
    

    return 0;
}