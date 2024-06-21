//pointer to structure using the reference.
#include <iostream>
#include<conio.h>
struct rectangle 
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle s = { 10,20 };
    struct rectangle *p;
    p = &s;
    p->breadth = 10;
    p->length = 20;
    printf("print the length and breadth\n");
    printf("%d\n", p->breadth);
    printf("%d\n", p->length);
}

