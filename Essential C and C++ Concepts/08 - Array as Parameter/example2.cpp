#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void fun(int *A, int n) 
{
    A[0]=15; // if you change the value an array of formal parameter, it will affect the actual parameter too
}

int main()
{
    int A[] = {2,4,6,8,10};
    int n=5;
    fun(A, n);

    for(int x:A)
    cout<<x<<" ";

    return 0;
}