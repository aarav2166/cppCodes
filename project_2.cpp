#include<iostream>
using namespace std;

class Addition
{
	public:
	int a, b, sum;
	void get_data(){
		cout<<"Enter first number- ";
		cin>>a;
		cout<<"Enter seccond number- ";
		cin>>b;
	}
	void addition(){
		sum=a+b;
		cout<<"Sum of 2 numbers"<<sum<<endl;
	}
};

class Subtraction
{
	public:
	int a, b, diff;
	void get_data(){
		cout<<"Enter first number- ";
		cin>>a;
		cout<<"Enter second number- ";
		cin>>b;
	}
	void subtraction(){
		diff=a-b;
		cout<<"Subtraction of 2 numbers is"<<diff<<endl;
	}
};

class Multiplication
{
	public:
	int a, b, product;
	void get_data(){
		cout<<"Enter first number- ";
		cin>>a;
		cout<<"Enter second number- ";
		cin>>b;
	}
	void multiplication(){
		product=a*b;
		cout<<"Product of 2 numbers are"<<product<<endl;
	}
};

class Division
{
	public:
	float a, b, div;
	void get_data(){
		cout<<"Enter first number- ";
		cin>>a;
		cout<<"Enter second number- ";
		cin>>b;
	}
	void division(){
		div=a/b;
		cout<<"Division of two numbers are"<<div<<endl;
	}
};

int main()
{
	Addition a;
	Subtraction s;
	Multiplication m;
	Division d;
	
	a.get_data();
	a.addition();
	s.get_data();
	s.subtraction();
	m.get_data();
	m.multiplication();
	d.get_data();
	d.division();
}
