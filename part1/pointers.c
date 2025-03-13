#include <stdio.h>

int main(void) {
    int x = 123;
    int y = 456;
    printf("Before modification %d, %d", x, y);
    int* p = &x;
    *p = 1230;
    p = &y;
    *p = 4560;
    printf("After modification %d, %d", x, y);
}