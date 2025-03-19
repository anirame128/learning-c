#include <stdio.h>
// standard input is keyboard, standard output is console

int main(void) {

    // printf("Enter a single character: ");
    // char mychar;
    // scanf("%c", &mychar);
    // printf("You entered: %c\n", mychar);

    char buff[50] = "A 123 456.789";
    char c;
    int x;
    double d;
    sscanf(buff, "%c %d %lf", &c, &x, &d);
    printf("The vaues are: %c, %d and %lf\n", c, x, d);

    printf("Enter a string: ");
    char str[10];
    if (fgets(str, 10, stdin) != NULL) {
        printf("You entered: %s\n", str);
    } else {
        printf("Filaure, No characters are red.\n");
    }
    
    puts("This is a puts() message");
}