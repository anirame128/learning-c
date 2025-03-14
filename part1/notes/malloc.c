#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char c;
    int x;
    double d;
} MyStruct;


int main(void)
{
    // allocates memory for the size of an int
    int *p = malloc(sizeof *p);
    // condition ensures memory allocation did not fail
    if (p == NULL) 
    {
        printf("Error allocating the memory. Exiting. ");
        return -1;
    } else{
        *p = 123;
        printf("The value is: %d\n", *p);
    }
    free(p);

    // allocate memory for an array
    int *ptr = malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Error allocating the memory. Exiting. ");
        return -1;
    } else{
        ptr[0] = 10;
        ptr[1] = 20;
        ptr[2] = 30;
        ptr[3] = 40;
        ptr[4] = 50;
        printf("Allocated an array of 5 integers\n");

        for(int i = 0; i < 5; i++) {
            printf("%d, ", ptr[i]);
        }
        printf("\n");
    }
    free(ptr);

    //Allocate memory for a char
    char* c = malloc(sizeof(char));
    if (c == NULL) {
        printf("Error allocating the memory. Exiting. ");
        return -1;
    } else {
        *c = 'A';
        printf("The char is %c\n", *c);
    }
    free(c);

    MyStruct* s = malloc(sizeof(MyStruct));
    if (s == NULL) {
        printf("Error allocating the memory. Exiting. ");
        return -1;
    } else {
        s->c = 'A';
        s->x = 4;
        s->d = 4.05;
        printf("char: %c, int: %d, double: %f \n", s->c, s->x, s->d);
    }
    free(s);
}