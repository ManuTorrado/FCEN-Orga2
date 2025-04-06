
#include <stdio.h>
#include <stdint.h>  // Necesario para usar tipos como int8_t, uint8_t, etc.
int main() {

    int8_t ocho = 4;
    int16_t diesciseis = 16;
    int32_t treintaydos = 32;
    int64_t sesentaycuatro = 64;

    printf("int8 (%lu)\n", sizeof(int8_t));
    printf("int16 (%lu)\n", sizeof(int16_t));
    printf("in32 (%lu)\n", sizeof(int32_t));
    printf("in64 (%lu)\n", sizeof(int64_t));

    return 0;
}