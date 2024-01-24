#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};

int main()
{
    // // struct Rectangle r ={10,5}; // In C, you must write struct keyword
    // Rectangle r ={10,5}; // no need to write struct keyword in C++
    // // Accessing the attributes of normal variables
    // cout<<r.length<<endl;
    // cout<<r.width<<endl;

    // // Accessing the attributes of variable in heap
    // Rectangle *p=&r;

    // Accessing the attributes of struct in heap in C
    // struct Rectangle *p;
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));

    // p->length=15;
    // p->width=7;

    // printf("%d", p->length);
    // printf("%d", p->width);

    // Accessing the attributes of struct in heap in C++
    Rectangle *p;
    p=new Rectangle;

    p->length=15;
    p->width=7;

    cout<<p->length<<endl;
    cout<<p->width<<endl;

    return 0;
}