#include<iostream>
using namespace std;

class lecture_details{
	public:
	int stu;
	char sub[500], cor[500], lec[500];
	void get_data(){
		cout<<"Enter name of lecturer-";
		cin>>lec;
		cout<<"Enter course-";
		cin>>cor;
		cout<<"Enter subject-";
		cin>>sub;
		cout<<"Enter number of students-";
		cin>>stu;
	}
	void display_data(){
		cout<<"Name of the lecurer is "<<lec<<endl;
		cout<<"Name of the course is "<<cor<<endl;
		cout<<"Subject-"<<sub<<endl;
		cout<<"Number of students are "<<stu<<endl;
	}
};
int main()
{
	lecture_details ld;
	ld.get_data();
	ld.display_data();
}
