#include<iostream>
using namespace std;
int main()
{
    int simple_interest;
    int principal;
    float rate;
    int time;
    int year;
    cout<<"Enter principal";
    cin>>principal;
    cout<<"Enter rate";
    cin>>rate;
    cout<<"Enter time";
    cin>>time;
    cout<<"Enter year";
    cin>>year;
    simple_interest=(principal*rate*time)/100;
    cout<<"simple interest is:="<<simple_interest;
    return 0;
}