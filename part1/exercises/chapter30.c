#include <stdio.h>

int main(void) {
    printf("Enter an int and a double: ");
    char buff[50];
    int x;
    double d;
    if(fgets(buff, 10, stdin) != NULL) {
        sscanf(buff, "%d %lf", &x, &d);
        printf("%d %f\n", x, d);
    } else {
        printf("Failure, Exiting...");
    }
    
}