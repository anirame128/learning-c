#include <stdio.h>

int main(void) {
    // Chapter 12
    char myarr[] = "Hello";
    printf("%s\n", myarr);

    int arr[5] = {10, 20, 30, 40, 50};
    arr[0] = 100;
    arr[4] = 500;
    for(int i = 0; i < 5; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    double dub = 45.67;
    double* double_ptr = &dub;
    *double_ptr = 4567.889898;
    printf("%f, \n", *double_ptr);

    int arrptr[5] = {10, 20, 30, 40, 50};
    int* ptr = arrptr;
    for(int i = 0; i < 5; i++) {
        printf("%d, ", ptr[i]);
    }
    printf("\n");

    char* myptr = &myarr;
    printf("%s\n", myptr);

    int* myarrptr = arr;
    printf("%d\n", *myarrptr);
    myarrptr += 4;
    printf("%d\n", *myarrptr);

    char *parr[] = {"First sentence", "Second sentence", "Third sentence"};
    for(int i = 0; i < 3; i++) {
        printf("%s\n", parr[i]);
    }
}