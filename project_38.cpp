#include<iostream>
using namespace std;

class memberget{
	public:
	int age[5], salary[5], i, j, k;
	char name[5][100];
	void get_data(){
		cout<<"Enter name age and salary to be given"<<endl;
		for(i=0;i<5;i++){
			cout<<"Name-";
			cin>>name[i];
			cout<<"Age-";
			cin>>age[i];
			cout<<"salary-";
			cin>>salary[i];
			cout<<"_______________________________________________"<<endl;
		}
	}
};

class memberdisplay : public memberget{
	public:
	void print_data(){
		for(i=0;i<5;i++){
			cout<<"Name-"<<name[i]<<endl;
			cout<<"Age-"<<age[i]<<endl;
			cout<<"Salary"<<salary[i]<<endl;
			cout<<"_______________________________________________"<<endl;
		}
	}
};
int main()
{
	memberdisplay a;
	a.get_data();
	a.print_data();
}
