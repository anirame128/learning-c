#include <stdio.h>

//typedef is used to shorten struct naming convention
typedef struct 
{
    char c;
    int x;
    double OOd;
} MyStruct;

// Self-Referencing Structures
typedef struct SelfStruct
{
    int x;
    struct SelfStruct* prev;
    struct SelfStruct* next;
} SelfStruct;

struct MyNode
{
    int val;
    struct MyNode* left;
    struct MyNode* right;
};

int main(void) {
    MyStruct s = {.c = 'a', .x = 42, .OOd = 234.5678};
    MyStruct* ps = &s;
    printf("Values in MyStruct: %c, %d, %f\n", s.c, s.x, s.OOd);
    printf("Values in MyStruct Pointer: %c, %d, %f\n", (*ps).c, (*ps).x, (*ps).OOd);
    // Another pointer notation
    printf("Values in MyStruct Pointer: %c, %d, %f\n", ps->c, ps->x, ps->OOd);

}