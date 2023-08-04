#include<iostream>
using namespace std;
class simple_intrest{
    public:
    float si;
    simple_intrest(float r, float p, float t){
        si=p*t*r/100;
        cout<<"The intrest is "<<si<<endl;
    }
};
int main()
{
    simple_intrest s;
    s.simple_intrest(2.5, 1000, 10);
}
