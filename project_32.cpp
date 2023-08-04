#include<iostream>
using namespace std;

inline void square(int a){
	cout<<"Square of "<<a<<" is "<<a*a<<endl;
}
inline void cube(int b){
	cout<<"Cube of "<<b<<" is "<<b*b*b<<endl;
}
int main()
{
	int x, y;
	cout<<"Enter a number to be squared-"<<endl;
	cin>>x;
	square(x);
	cout<<"Enter a number to be cubed-"<<endl;
	cin>>y;
	cube(y);
}
