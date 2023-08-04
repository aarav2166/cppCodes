#include<iostream>
using namespace std;

class constructor{
	public:
		constuctor(int a, int b){
			cout<<"Addition of 2 numbers is-"<<a+b<<endl;
			cout<<"Subtraction of 2 numbers is-"<<a-b<<endl;
			cout<<"Multiplication of 2 numbers is-"<<a*b<<endl;
			cout<<"Division of 2 numbers is-"<<a/b<<endl;
		}
};
int main(){
	int x, y;
	cout<<"Enter value of X-";
	cin>>x;
	cout<<"Enter value of Y-";
	cin>>y;
	constructor c;
	c.constuctor(x, y);
}
