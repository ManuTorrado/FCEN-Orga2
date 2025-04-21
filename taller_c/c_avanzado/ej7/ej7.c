/*
Explicar que sucederia si la firma de la funcion swap fuera void swap(int a, int b).
En ese caso, ¿podriamos intercambiar los valores de x e y?
*/

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);
}

/* 
RTA: No se intercambian los valores
*/