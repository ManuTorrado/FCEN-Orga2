#include "contar_espacios.h"
#include <stdio.h>

uint32_t longitud_de_string(char* string) {
    int len = strlen(string);
    return len;
}

uint32_t contar_espacios(char* string) {
    int espacios = 0;
    for(int i = 0; i < longitud_de_string(string) - 1 ; i++){
        if(string[i] == ' '){
            espacios++;
        }
    }

    return espacios;
}

// Pueden probar acá su código (recuerden comentarlo antes de ejecutar los tests!)

int main() {

    printf("1. %d\n", contar_espacios("hola como andas?"));

   printf("2. %d\n", contar_espacios("holaaaa orga2"));
}
