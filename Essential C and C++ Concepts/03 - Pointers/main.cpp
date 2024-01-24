#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int width;
};

int main()
{
    // int a = 10;
    // int *p;
    // p=&a;
    
    // cout<<a<<endl;
    // printf("using pointer %d %d", *p);

    // int A[5] = {2,4,6,8,10}; // Array is created inside the stack frame of main function

    // int *p;

    // This array is created inside the heap

    // Using C language
    // p=(int *)malloc(5*sizeof(int));

    // Using C++ language
    // p=new int[5];

    // p[0]=10; p[1]=15; p[2]=14; p[3]=21; p[4]=31;

    // for(int i=0;i<5;i++)
    // cout<<p[i]<<endl;

    // You must release the memory by when you have finished using it

    // Using C language
    // free(p);

    // Using C++ language
    // delete []p; 

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    // Every pointer size is 8 bytes whatever the type of pointer is
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    
    return 0;
}