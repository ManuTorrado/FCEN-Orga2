
#include <stdio.h>
#include <stdint.h>  // Necesario para usar tipos como int8_t, uint8_t, etc.

/*

Realizar un programa que compare si los 3 bits mas altos de una palabra de 32 bits son
iguales a los 3 bits mas bajos de otra palabra de 32 bits. Si son iguales, informarlo por
pantalla.

*/

int main(){
    uint32_t word = 0b10100000000000000000000000000000; // 3 bits más altos = 101
    uint32_t other_word = 0b00000000000000000000000000000101; // 3 bits más bajos = 101

    uint32_t msb_word = (word >> 29) & 0b111;

    uint32_t lsb_other_word = (other_word) & 0b111;
 
    if(lsb_other_word == msb_word){
        printf("Son iguales\n");
    }

    return 0;
}