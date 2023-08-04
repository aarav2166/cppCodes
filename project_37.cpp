#include<iostream>
using namespace std;

class get_data{
	public:
		int run[10], total=0, i, best=0;
		float average;
		void getdata(){
			cout<<"Enter runs scored in last 10 matches:"<<endl;
			for(i=0;i<10;i++){
				cin>>run[i];
				total+=run[i];
			}
			for(i=0;i<10;i++){
				if(run[i]>best){
				best=run[i];
				}
			}
			average=total/10;
		}
};
class print_data : public get_data{
	public:
	void printdata(){
		cout<<"Runs in last 10 matches"<<endl;
		for(i=0;i<10;i++){
			cout<<run[i]<<endl;
		}
		cout<<total<<" are the TOTAL runs scored"<<endl;
		cout<<best<<" is the BEST performance"<<endl;
		cout<<"AVERAGE is "<<average;
	}
};
int main(){
	print_data c1;
	c1.getdata();
	c1.printdata();
}
