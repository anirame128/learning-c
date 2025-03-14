#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int *p = calloc(1, sizeof(int));

    if (p == NULL) {
        printf("Memory allocation failed. Exiting now.");
        return -1;
    } else {
        printf("The initial value is: %d\n", *p);
        *p = 123;
        printf("The new value is %d\n", *p);
    }

    int *arrptr = calloc(5, sizeof(int));

    if (arrptr == NULL) {
        printf("Memory allocation failed. Exiting now.");
        return -1;
    } else {
        arrptr[0] = 10;
        arrptr[1] = 20;
        arrptr[2] = 30;
        arrptr[3] = 40;
        arrptr[4] = 50;
        for(int i = 0; i < 5; i++) {
            printf("%d ", arrptr[i]);
        }
    }
    printf("\n");
    free(arrptr);
}