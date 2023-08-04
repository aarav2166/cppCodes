#include<iostream>
#include<iomanip>
using namespace std;

class student{
	public:
		int roll, sub[3], total=0, p=0, i;
		void get_marks(){
			for(i=0;i<3;i++){
				cin>>sub[i];
				total=total+sub[i];
			}
			p=total/3;
		}
		void print_data(){
			cout<<"Roll No.\t";
			for(i=i;i<=3;i++){
				cout<<"sub["<<i<<"]\t";
			}
			cout<<"Total\tPercentage";
		}
};
int main()
{
	student s;
	cout<<"Enter marks of 3 subjects"<<endl;
	s.print_data();
}
