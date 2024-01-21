#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void fun(int A[], int n) // array always pass by address, not by value or reference
// void fun(*A, int n) // this still works
{
    for(int i=0;i<5;i++)
    cout<<A[i]<<endl;
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