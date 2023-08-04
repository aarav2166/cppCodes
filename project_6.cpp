#include<iostream>
using namespace std;
class book_store{
	public:
	int price;
	char author[500], title[50000];
	void get_data(){
		cout<<"Enter name of the book-";
		cin>>title;
		cout<<"Enter name of the author-";
		cin>>author;
		cout<<"Enter price of the book-";
		cin>>price;
	}
	void display_data(){
		cout<<"Name of book is '"<<title<<"'"<<endl;
		cout<<"Name of the author is '"<<author<<"'"<<endl;
		cout<<"Price of the book is "<<price<<endl;
	}
};
int main()
{
	book_store bs;
	bs.get_data();
	bs.display_data();
}
