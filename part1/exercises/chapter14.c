#include <stdio.h>

void printMessage(void);

int main(void) {
    printMessage();
}

void ptrFunction(int* val) {
    *val += 1;
}

int multiply(int x, int y){
    return x * y;
}

void printMessage(void) {
    printf("Hello World \n");
    int x = 4;
    ptrFunction(&x);
    printf("%d\n", x);
    int result = multiply(4,5);
    printf("%d\n", result);
}