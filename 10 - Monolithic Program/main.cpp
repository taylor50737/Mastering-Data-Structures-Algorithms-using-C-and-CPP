#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int length = 0, width = 0; // whenever you declare a variable, you initialize them as a good practice

    printf("Enter Length and Width");
    cin>>length>>width;

    int area = length * width;
    int peri = 2 * (length + width);

    printf("Area=%d\nPerimeter=%d\n", area, peri);

    return 0;
}