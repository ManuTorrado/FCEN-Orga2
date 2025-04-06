#include <stdio.h>
int main() {

    char c = 100;
    short s = -8712;
    int i = 123456;
    long l = 1234567890;

    unsigned int u_int = 1000;
    unsigned short u_short = 255;
    unsigned char u_char = 255;
    unsigned long u_long = 1234567890;
    unsigned long long u_llong = 1000000000000LL;


    // Entre parentesis mostramos el valor minimo que almacena (en bytes) y luego el valor maximo que puedo guardar
    
    printf("char(%lu): %d \n", sizeof(c),c); 
    
    printf("unsignedchar(%lu): %hhu \n", sizeof(u_char), u_char);

    printf("short(%lu): %d \n", sizeof(s),s);

    printf("unsignedshort(%lu): %hu \n",sizeof(u_short), u_short );

    printf("int(%lu): %d \n", sizeof(i),i);

    printf("unsigned int(%lu): %u \n", sizeof(u_int), u_int);

    printf("long(%lu): %ld \n", sizeof(l),l);

    printf("unsignedlong(%lu): %lu \n", sizeof(u_long),u_long);

    printf("unsignedlong(%lu): %llu \n", sizeof(u_llong),u_llong);
    return 0;
}