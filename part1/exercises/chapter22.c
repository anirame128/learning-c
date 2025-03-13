#include <stdio.h>

struct Person 
{
    char* name;
    int age;
    double weight;
};

typedef struct TPerson TPerson;

struct TPerson 
{
    char* name;
    int age;
    double weight;
};

struct Car 
{
    char brand[50];
    int year;
    double price;
};

typedef union Auction Auction;

union Auction {
    char* product;
    double bid_price;
    int bidder;
};

int main(void) {
    struct Person p1 = {"Alice", 23, 120.45};
    printf("Name: %s, Age: %d, Weight: %f\n", p1.name, p1.age, p1.weight);

    TPerson p2 = {"John", 25, 160.34};
    printf("Name: %s, Age: %d, Weight: %f\n", p2.name, p2.age, p2.weight);

    struct Car c = {"Honda Accord", 2018, 32456.78};
    printf("Brand: %s, Year: %d, Price: %f\n", c.brand, c.year, c.price);

    struct Person p3 = {"Jasmeet", 29, 180.45};
    struct Person* ptr = &p3;
    printf("Name: %s, Age: %d, Weight: %f\n", ptr->name, ptr->age, ptr->weight);

    Auction a1;

    a1.product = "Art from Piccaso";
    printf("Our product is %s\n", a1.product);
    a1.bid_price = 123.45;
    printf("Our bid price is: %.2f\n", a1.bid_price);
    a1.bidder = 34;
    printf("%d just bid on:\n", a1.bidder);

    // const name
    const int x = 123;
    // const pointer
    char *const ptr1 = "Hello World";
    // const pointee
    int y = 456;
    const int *ptr2 = &y;
    printf("%d\n", x);
    printf("%p\n", (void *)ptr1);
    printf("%d\n", *ptr2);

    



}