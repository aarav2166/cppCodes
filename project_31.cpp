#include<iostream>
using namespace std;
class areas{
	public:
	void area(float r){
		cout<<"Area of circle is-"<<3.14*r*r<<endl;
	}
	void area(int l, int b){
		cout<<"Area of Rectangle is-"<<l*b<<endl;
	}
	void area(float h, float base){
		cout<<"Area of the Triangle is-"<<0.5*h*base;
	}
};
int main()
{
	areas a;
	a.area(6.5);
	a.area(3,4);
	a.area(5,9);
}
