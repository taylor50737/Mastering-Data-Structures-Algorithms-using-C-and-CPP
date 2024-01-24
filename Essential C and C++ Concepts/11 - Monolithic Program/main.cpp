#include <iostream>
#include <stdio.h>

using namespace std;

int area(int length, int width)
{
    return length*width;
}

int perimeter(int length, int width)
{
    int p;
    p=2*(length+width);

    return p;
}

int main()
{
    int length = 0, width = 0; // whenever you declare a variable, you initialize them as a good practice

    printf("Enter Length and Width");
    cin>>length>>width;

    int a=area(length, width);
    int peri=perimeter(length, width);

    printf("Area=%d\nPerimeter=%d\n", a, peri);

    return 0;
}