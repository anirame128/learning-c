#include <stdio.h>

void myFunction() {
    printf("Hello World");
}
int main(void) {
    void (*fp)();
    fp = myFunction;
    fp();
}