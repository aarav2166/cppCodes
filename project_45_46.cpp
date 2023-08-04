#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[50], age[50];
	ofstream outfile;
	
	outfile.open("DATA.txt");
	cout<<"Writing in file"<<endl;
	cout<<"Enter name-";
	cin>>name;
	cout<<"Enter age-";
	cin>>age;
	outfile.close();
	
	ifstream infile;
	infile.open("DATA.txt");
	cout<<"Reading from file"<<endl;
	cout<<name<<endl;
	cout<<age<<endl;
	infile.close();
}
