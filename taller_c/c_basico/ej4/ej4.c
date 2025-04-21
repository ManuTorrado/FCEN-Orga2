
#include <stdio.h>
#include <stdint.h>  // Necesario para usar tipos como int8_t, uint8_t, etc.


/* 
Realizar un programa que imprima por pantalla los tamaños de los tipos de datos de ancho fijo de la biblioteca stdint.h.
*/

int main() {

    printf("int8_t en bytes: (%lu)\n", sizeof(int8_t));
    printf("int16_t en bytes:  (%lu)\n", sizeof(int16_t));
    printf("int32_t en bytes:  (%lu)\n", sizeof(int32_t));
    printf("int64_t en bytes:  (%lu)\n", sizeof(int64_t));

    printf("Datos no signados:\n");

    printf("uint8_t en bytes: (%lu)\n", sizeof(uint8_t));
    printf("uint16_t en bytes:  (%lu)\n", sizeof(uint16_t));
    printf("uint32_t en bytes:  (%lu)\n", sizeof(uint32_t));
    printf("uint64_t en bytes:  (%lu)\n", sizeof(uint64_t));


    return 0;
}