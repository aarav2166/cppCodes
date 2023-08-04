#include<iostream>
using namespace std;

class test{
    public:
    void get_marks(){
        int roll, sub[2][5], i;
         for(i=0;i<5;i++){
            roll=i;
        }
        cout<<"Enter marks for subject 1";
        for(i=0;i<5;i++){
            cin>>sub[1][i];
        }
        cout<<"Enter marks for subject 2";
        for(i=0;i<5;i++){
            cin>>sub[2][i];
        }
    }
    
};

class total : public test{
    public:
    int sub[2][5], tmarks[2], i;
    void cal_marks(){
        for(i=0;i<5;i++){
            tmarks[1]=sub[1][i]+tmarks[1];
        }
        for(i=0;i<5;i++){
        tmarks[2]=sub[2][i]+tmarks[2];
        }
    }

};

class print_data : public total{
    public:
    int sub[2][5], i;
    void print(){
        cout<<"Marks in subject 1"<<endl;
        for(i=0;i<5;i++){
            cout<<sub[1][i]<<endl;
        }
        cout<<"Marks in subject 2"<<endl;
        for(i=0;i<5;i++){
            cout<<sub[2][i]<<endl;
        }
        cout<<"Total marks in subject 1 are "<<tmarks[1]<<endl;
        cout<<"Total marks in subject 2 are "<<tmarks[2]<<endl;
    }
};

int main()
{
    print_data x;
    x.get_marks();
    x.cal_marks();
    x.print();
}