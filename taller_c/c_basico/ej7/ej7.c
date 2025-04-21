


#include <stdio.h>
int main() {
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;

    printf("%d\n", a+b*c/d);
    printf("%d\n", a % b);
    printf("%x, %x\n", a == b, a !=b);
    printf("%x, %x\n", a & b, a | b);
    printf("%d\n", ~a);
    printf("%x, %x\n", a && b, a || b);
    printf("%x\n", a << b);
    printf("%x\n", a >> b);
    printf("%x\n", a += b);
    printf("%x\n", a -= b);
    printf("%x\n", a *= b);
    printf("%x\n", a /= b);
    printf("%x\n", a %= b);
    return 0;
}
