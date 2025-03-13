#include <stdio.h>

int main(void) {
    // Declaring, Initializing, Addressing, and Dereferencing Pointers
    int x = 123;
    int y = 456;
    printf("Before modification %d, %d\n", x, y);
    int* p = &x;
    *p = 1230;
    p = &y;
    *p = 4560;
    printf("After modification %d, %d\n", x, y);

    //Arrays and Pointers
    int arr[5] = {10,20,30,40,50};
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int *pp;
    pp = &arr[0];
    *pp = 201;
    pp = &arr[4];
    *pp = 123;
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}