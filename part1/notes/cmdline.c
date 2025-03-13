#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc is the number of cmd-line args we pass to the executable.
    // argv is the pointer to an array of strings that represent the args.
    printf("The command-line args are: \n");
    for(int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
}