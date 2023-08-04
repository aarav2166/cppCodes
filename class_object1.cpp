#include<iostream>
using namespace std;

class square
{
	public:
	float s, area;
	void ar_square()
	{
	cout<<"Enter the side of the square- ";
	cin>>s;
	area=s*s;
	cout<<"Area of square is "<<area;
	}
};

class rectangle
{
	public:
	float l, b, area;
	void ar_rectangle()
	{
		cout<<"Enter length- ";
		cin>>l;
		cout<<"Enter bredth- ";
		cin>>b;
		area=l*b;
		cout<<"Area of rectangle is "<<area;
	}
};

class circle
{
	public:
	float pi=3.14, r, area;
	void ar_circle()
	{
		cout<<"Enter radius- ";
		cin>>r;
		area=pi*r*r;
		cout<<"Area of the circle is "<<area;
	}
};

int main()
{
	int x;
	square s1;
	rectangle r1;
	circle c1;
	
	cout<<"Press '1' for area of square"<<endl;
	cout<<"Press '2' for area of reactangle"<<endl;
	cout<<"Press '3' for area of circle"<<endl;
	cin>>x;
	
	switch(x)
	{
		case 1:
			s1.ar_square();
			break;
		
		case 2:
			r1.ar_rectangle();
			break;
		
		case 3:
			c1.ar_circle();
			break;
			
		default :
			cout<<"Enter a valid choice!!"<<endl;
	}
}
