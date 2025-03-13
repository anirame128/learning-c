#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define MY_FLAG 123
#define MY_SUM(x,y) ((x) + (y))
//#include "myheaderfile.h" user-defined file

int main(void) {
    printf("Included several standard-library headers.\n");
    printf("The max is: %d\n", MAX);

    #if MY_FLAG < 123
        printf("This portion of the code(A) \n");
        printf("will not get compiled\n");
    #elif MY_FLAG == 123
        printf("This portion of the code(B)\n");
        printf("will get compiled\n");
    #else
        printf("This portion of code (C)\n");
        printf("will not get compiled");
    #endif

    int mysum = MY_SUM(10, 20);
    printf("The result is: %d\n", mysum);
}