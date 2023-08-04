#include<iostream>
using namespace std;

class fibonacci
{
    public:
    int i, n, num=0;
    void get_data()
    {
        cout<<"Enter the number till you want the series- ";
        cin>>n;
    }
    void calc_num()
    {
        for (i=0;i<=n;i++)
        {
            num=num+i;
             cout<<num<<endl;
        }
    }
};
int main()
{
    fibonacci f;
    f.get_data();
    f.calc_num();
}
