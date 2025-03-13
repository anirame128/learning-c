#include <stdio.h>

int main(void) {
    // Chapter 4
    // comment 1
    // comment 2
    printf("Hello World!\n");
    printf("C rocks!\n");
    char c = 'a';
    int x = 4;
    float f = 4.5;
    double t = 123.456;
    printf("%c, %d, %f, %f\n", c,x,f,t);

    // Chapter 8
    int z = 4;
    int y = 20;
    int sum = x + y;
    printf("%d\n", sum);

    int div = y / z;
    printf("%d\n", div);

    double res = (double)z / y;
    printf("%f\n", res);

    if (z == y) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    if (z > 50 && z < 100) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    int check = 6;
    switch(check) {
        case 1:
            printf("Inside range\n");
            break;
        case 2:
            printf("Inside range\n");
            break;
        case 3:
            printf("Inside rang\n");
            break;
        default:
            printf("Not in range\n");
            break;
    }

    for(int i = 0; i < 10; i ++) {
        printf("%d", i);
    }
    printf("\n");
    int i = 0;
    while(i < 10) {
        printf("%d", i);
        i++;
    }
    printf("\n");

}