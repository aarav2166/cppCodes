#include<iostream>
using namespace std;

class bank_account{
	public:
	int acc, balance=1000000, withdw, depst;
	char name[500];
	void get_data(){
		cout<<"Enter name of account holder- ";
		cin>>name;
		cout<<"Enter the account number- ";
		cin>>acc;
	}
	void display_data(){
		cout<<"Name-"<<name<<endl;
		cout<<"Account number-"<<acc<<endl;
		cout<<"Balance-"<<balance<<endl;
	}
	void withdraw(){
		cout<<"Enter the amount to be withdrawn-";
		cin>>withdw;
		balance=balance-withdw;
		cout<<"Remaining balace is "<<balance<<endl;
	}
	void deposit(){
		cout<<"Enter the amount to be deposited-";
		cin>>depst;
		balance=balance-depst;
		cout<<"New balace is "<<balance<<endl;
	}
};
int main()
{
	int x;
	bank_account b1;
	b1.get_data();
	b1.display_data();
	cout<<"Press '1' to withdraw"<<endl;
	cout<<"Press '2' to deposit"<<endl;
	cin>>x;
	switch (x)
	{
		case 1:
			b1.withdraw();
			break;
			
		case 2:
			b1.deposit();
			break;
			
		default:
			cout<<"Enter a valid option";
			break;
	}
}
