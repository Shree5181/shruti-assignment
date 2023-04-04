#include<iostream>
#include<cstring>
using namespace std;
class overload
{
    public:
    char demo[20];
    void getvalue()
    {
        cout<<"Enter value: ";
        cin>>demo;
    }
    void operator + (overload d1)
    {
       strcat(demo,d1.demo);
        cout<<demo;
    }
};
int main()
{
    overload obj1,obj2;
    obj1.getvalue();
    obj2.getvalue();
    obj1 + obj2;
}