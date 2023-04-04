#include<iostream>
using namespace std;
class xyz;
class abc

{
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter 1st: ";
        cin>>a;
    }
    friend void swa(abc ob,xyz ob1);
}ob;
class xyz
{
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter 2nd: ";
        cin>>b;
    }
    friend void swa(abc ob,xyz ob1);
}ob1;
void swa(abc ob,xyz ob1)
{
    int temp;
    temp=ob.a;
    ob.a=ob1.b;
    ob1.b=temp;
    cout<<"after swapping"<<ob.a;
    cout<<"after swapping"<<ob1.b;
}
int main()
{
    ob.getdata();
    ob1.getdata();
    swa(ob,ob1);
    return 0;
}