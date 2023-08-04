#include<iostream>
#include<string.h>
using namespace std;

class concantate{
	public:
		char s1[100], s2[100];
		void string(){
			cout<<"Enter String 1-";
			cin>>s1;
			cout<<"Enter String 2-";
			cout<<s2;
		}
		void string(char s1, char s2){
			cout<<strcat(s1, s2);
		}
};
int main(){
	concantate c;
	c.string();
	cout<<"Concatenation:"<<c.string(s1, s2);
}
