#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int add(int a, int b)
{
    // int c;
    // c = a + b;

    a++;
    cout<<a;

    return 0;
}

int main()
{
    int num1=10, num2=15, sum;

    sum = add(num1, num2);

    cout<<endl<<num1;

    // Output: 11 10
    // If the formal parameters are changed then actual parameters will not changed

    // cout<<"Sum is "<<sum<<endl;

    return 0;
}