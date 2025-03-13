#include <stdio.h>

// void return and void parameters
void printMessage(void) {
    printf("Hello World\n");
}
// int return and two int parameters
int mySum(int x, int y) {
    return x + y;
}
// passing by pointer/address to modify values through a function
void myFunction(int *x) {
    *x = 456;
}

int main(void) {
    printMessage();
    printf("%d\n", mySum(4,5));
    int a = 123;
    printf("Before function call: %d\n", a);
    myFunction(&a);
    printf("After function call: %d\n", a);
}