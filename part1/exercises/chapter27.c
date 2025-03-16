#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double* p = malloc(sizeof(double));
    if (p == NULL) {
        printf("Error allocating memory. Exiting...\n");
        return -1;
    } else {
        *p = 123.456;
        printf("Double: %f\n", *p);
    }
    int* p1 = malloc(sizeof *p1);
    if (p1 == NULL) {
        printf("Error allocating memory. Exiting...\n");
        return -1;
    } else {
        *p1 = 123;
        printf("Int: %d\n", *p1);
    }
    free(p);
    free(p1);

    

}