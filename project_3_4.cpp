#include<iostream>
using namespace std;

class matrix {
	public:
	int a[3][3], b[3][3], sum[3][3], i, j;
	void get_matrix()
	{
		cout<<"Enter elements of Matrix 1:"<<endl;
		for(i=1;i<=3;i++){
			for(j=1;j<=3;j++){
				cin>>a[i][j];
			}
		}
		cout<<"Enter elements of Matrix 2:"<<endl;
		for(i=1;i<=3;i++){
			for(j=1;j<=3;j++){
				cin>>b[i][j];
			}
		}
	}
	void add_matrix()
	{
		for(i=1;i<=3;i++){
			for(j=1;j<=3;j++){
			sum[i][j]=a[i][j]+b[i][j];
			}
		}
		cout<<"Addition of matrix is:"<<endl;
		for(i=1;i<=3;i++){
			for(j=1;j<=3;j++){
			cout<<"-"<<sum[i][j];
			}
			cout<<endl;
		}
	} 
};
int main()
{
	matrix x1;
	x1.get_matrix();
	x1.add_matrix();
}
