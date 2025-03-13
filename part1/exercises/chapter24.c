#include <stdio.h>
#define MAX_NUM 100
#define MY_CONDITIONAL_MACRO
#define LESS_THAN(x,y) (((x) < (y)) ? (x) : (y))
#define GREATER_THAN(x,y) (((x) > (y)) ? (x) : (y))

void myfunction(void) {
    printf("my function: %s\n", __func__);
}

int main(void) {
    printf("The max sum is %d\n", MAX_NUM);
    #undef MAX_NUM
    printf("MAX_NUM is undefined\n");

    #ifdef MY_CONDITIONAL_MACRO
        printf("Macro exists\n");
    #else
        printf("Macro doesn't exist");
    #endif

    printf("The line is %d\n", __LINE__);
    printf("The file is %s\n", __FILE__);
    printf("The time is %s\n", __TIME__);
    printf("The date is %s\n", __DATE__);
    printf("The C standard is %ld\n", __STDC_VERSION__);
    myfunction();
    int less_than = LESS_THAN(4, 5);
    printf("Lesser than value: %d\n", less_than);
    int greater_than = GREATER_THAN(4, 5);
    printf("Greater than value: %d\n", greater_than);

}