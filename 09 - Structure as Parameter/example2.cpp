#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};

void fun(struct Rectangle *p)
{
    p->length=20;
    cout<<"Length "<<p->length<<endl<<"Width "<<p->width<<endl;
}

int main()
{
    struct Rectangle r={10,5};
    fun(&r);

    printf("Length %d \nWidth %d\n", r.length, r.width);
    return 0;
}