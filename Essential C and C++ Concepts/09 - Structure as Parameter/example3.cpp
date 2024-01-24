#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};

struct Rectangle *fun()
{
    struct Rectangle *p;
    p=new Rectangle; // C++
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle)); // C

    p->length=15;
    p->width=7;

    return p;
}

int main()
{
    struct Rectangle *ptr=fun();

    cout<<"Length "<<ptr->length<<endl<<"Width "<<ptr->width<<endl;

    return 0;
}