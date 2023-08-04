#include<iostream>
using namespace std;
class maxf{
	private:
	int num[5], i, max=0;
	public:
		
		friend void cal_max();
		friend void print_max();
		
};
void cal_max(){
	int num[5], i, max=0;
			cout<<"Enter 5 numbers:"<<endl;
			for(i=0;i<5;i++){
				cin>>num[i];
			}
			for(i=0;i<5;i++){
				if(num[i]>max){
					num[i]=max;
				}
			}		
		}
		
void print_max(){
	int num[5], i, max=0;
			cout<<"LArgest number is "<<max<<endl;
		}
int main()
{
	maxf m;
	m.cal_max();
	m.print_max();
}
