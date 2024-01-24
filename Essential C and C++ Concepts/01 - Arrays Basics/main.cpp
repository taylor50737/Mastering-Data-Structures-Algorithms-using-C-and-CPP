#include <iostream>

using namespace std;

int main() 
{
    int n;
    cout<<"Enter Size";
    cin>>n;
    int A[n]; // Variable size arrays cannot be initialized
    A[0]=2;

    for (int x:A)
    {
        cout<<x<<endl;
    }

    return 0;
}