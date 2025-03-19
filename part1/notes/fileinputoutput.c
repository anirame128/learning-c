#include <stdio.h>

int main(void) {
    char str[100];
    FILE *fp = fopen("myfile.txt", "r");
    if (!fp) {
        printf("Error opening the file. Exiting...\n");
        return 1;
    }
    while (fgets(str, 100, fp) != NULL) {
        printf("%s", str);
    }
    fclose(fp);

    FILE *fp1 = fopen("myfile.txt", "w");
    fprintf(fp1, "%s", "YOU'RE A GENIUS MAXWELL DENT\n");
    fclose(fp1);
}