#include <stdio.h>

int main(void) {
    // local variable c with type char(1 byte) assigned to 'a'
    char c = 'a';
    // %c is a format specifier for characters
    printf("%c\n", c);
    printf("The size of char is %zu\n", sizeof(c));

    // local variable x with type int(4 bytes) assigned to 4
    int x = 4;
    printf("%d\n", x);

    //local variable y with type short(2 bytes) assigned to 2
    short y = 2;
    printf("%d\n", y);

    //local variable z with type float(4 bytes) assigned to 7.5
    float z = 8.5;
    printf("%.3f\n", z);

    //local variable a with typer double(8 bytes) assigned to 123.456789
    double a = 123.456789;
    printf("%f\n", a);
}