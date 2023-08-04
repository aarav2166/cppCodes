#include<iostream>
using namespace std;

class matrix{
	public:
		int i;
	void m(int a[5], int b[5]){
		cout<<"enter elements of matrix 1:"<<endl;
		for(i=0;i<5;i++){
			cin>>a[i];
		}
		cout<<"enter elements of matrix 2:"<<endl;
		for(i=0;i<5;i++){
			cin>>b[i];
		}
	}
	void m(int a[5], int b[5], int c[5]){
		for(i=0;i<5;i++){
			c[i]=a[i]+b[i];
		}
	}
	void m(int c[5]){
		cout<<"Addition of 2 matrixes are:"<<endl;
		for(i=0;i<5;i++){
			cout<<"|"<<c[i]<<"|1";
		}
	}
};
int main()
{
	int a[5], b[5], c[5];
	matrix mm;
	mm.m(a,b);
	mm.m(a,b,c);
	mm.m(c);
}
