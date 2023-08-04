#include<iostream>
using namespace std;

int square_sum()
{
    int num[5], sum=0, i;
    for(i=1; i<=5; i++){
      cin>>num[i];
      sum=sum+(num[i]*num[i]);
    }
  cout<<sum;
}
int main(){
square_sum();
}
