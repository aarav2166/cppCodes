#include<iostream>
using namespace std;
class swap{
	private:
		int a, b;
	public:
		void get_value(){
			cout<<"Enter first value-";
			cin>>a;
			cout<<"Enter second value-";
			cin>>b;
		}
	friend void swap_display();
};
friend void swap_display(){
	int a, b;
	a=b+a;
	b=a;
	a=b-a;
	cout<<"First number - "<<a<<endl;
	cout<<"Second number - "<<b<<endl;
}
int main()
{
	swap s;
	s.get_value();
	s.swap_display();
}
