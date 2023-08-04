#include<iostream>
using namespace std;

class matrix
{
	public:
	int a[3][3], b[3][3], sum[3][3], diff[3][3], mul[3][3] i, j;
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
	void add_matrix(int a, b)
	{
		for(i=1;i<=3;i++){
			for(j=1;j<=3;j++){
			sum[i][j]=a[i][j]+b[i][j];
			}
		}
		cout<<"Addition of matrix is:"
		for(i=1;i<=3;i++){
			for(j=1;j<=3;j++){
			cout<<sum[i][j];
			}
			cout<<endl;
		}
	}
	void subtract_matrix(int a, b)
	{
		for(i=1;i<=3;i++){
			for(j=1;j<=3;j++){
			sum[i][j]=a[i][j]-b[i][j];
			}
		}
		cout<<"Subtraction of matrix is:"
		for(i=1;i<=3;i++){
			for(j=1;j<=3;j++){
			cout<<diff[i][j];
			}
			cout<<endl;
		}
	}
		void multiply_matrix(int a, b)
	{
		for(i=1;i<=3;i++){
			for(j=1;j<=3;j++){
			mul[i][j]+=a[i][j]*b[i][j];
			}
		}
		cout<<"Multiplication of matrix is:"
		for(i=1;i<=3;i++){
			for(j=1;j<=3;j++){
			cout<<mul[i][j];
			}
			cout<<endl;
		}
	}
};
int main()
{
	matrix m;
	int x;
	cout<<"Enter '1' for Addition of Matrix"<<endl;
	cout<<"Enter '2' for Subtraction of Matrix"<<endl;
	cout<<"Enter '3' for Multiplication of Matrix"<<endl;
	cin>>x;
	
	switch(x){
		case 1:
			m.get_matrix();
			m.add_matrix(int a, b);
			break;
		
		case 2:
			m.get_matrix();
			m.subtract_matrix(int a, b);
			
		case 3:
			m.get_matrix();
			m.multiply_matrix(int a, b);
			
		default:
			cout<<"Enter a valid number!!"<<endl;
	}
}
