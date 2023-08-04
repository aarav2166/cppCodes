#include<iostream>
using namespace std;
template <class t>
t swap(){
	int a, b, c;
	cout<<"Enter value of a-";
	cin>>a;
	cout<<"Enter value of b-";
	cin>>b;
	a=c;
	a=b;
	c=b;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}
int main()
{
	swap<int>();
}
