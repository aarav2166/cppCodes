#include<iostream>
using namespace std;

inline void add(int a, int b)
{
    cout<<a<<"+"<<b<<"="<<a+b;
}

int main()
{
    int a, b;
    cout<<"Enter number 1- ";
    cin>>a;
    cout<<"Enter number 2- ";
    cin>>b;
    add(a,b);
}
