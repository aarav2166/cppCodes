#include<iostream>
using namespace std;

class sav_acc{
	public:
		int bal, withdraw, deposit, accnum, x;
		char name[200];
		void get_data(){
			cout<<"Enter name-";
			cin>>name;
			cout<<"Enter account number-";
			cin>>accnum;
			cout<<"Enter balance-";
			cin>>bal;
		}
		void print_data(){
			cout<<"Name-"<<name<<endl;
			cout<<"Account number-"<<accnum<<endl;
			cout<<"Balance-"<<bal<<endl;
		}
		void dep_with(){
			cout<<"Enter 1 to withdraw"<<endl;
			cout<<"Enter 2 to deposit"<<endl;
			cin>>x;
			switch (x){
				case 1:
					cout<<"Enter amount to withdraw-";
					cin>>withdraw;
					bal=bal-withdraw;
					cout<<"Balance is "<<bal<<endl;
					break;
					
				case 2:
					cout<<"Enter amount to deposit-";
					cin>>deposit;
					bal=bal+deposit;
					cout<<"Balance is "<<bal<<endl;
					break;
					
				default:
					cout<<"Enter a valid option"<<endl;
					break;
			}
		}
};

class cur_acc{
	public:
		int balance, check, accno, sacc, samt;
		char name1[200];
		void get_data(){
			cout<<"Enter name-";
			cin>>name1;
			cout<<"Enter account number-";
			cin>>accno;
			cout<<"Enter balance-";
			cin>>balance;
		}
		void cheque(){
			cout<<"Enter the account number where money is to be sent-";
			cin>>sacc;
			cout<<"Enter the account to be sent-";
			cin>>samt;
			cout<<"Money has been sucessesfully sent!";
		}
		void display_data(){
			cout<<"Name-"<<name1<<endl;
			cout<<"Account number-"<<accno<<endl;
			cout<<"Balance-"<<balance<<endl;
		}
};

int main()
{
	sav_acc sa;
	cur_acc ca;
	int i;
	cout<<"Enter 1 to view savings account"<<endl;
	cout<<"Enter 2 to view current account"<<endl;
	cin>>i;
	switch (i){
		case 1:
			sa.get_data();
			sa.print_data();
			sa.dep_with();
			sa.print_data();
			break;
			
		case 2:
			ca.get_data();
			ca.display_data();
			ca.cheque();
			ca.display_data();
			break;
			
		default:
			cout<<"Enter a valid option"<<endl;
			break;
	}
}
