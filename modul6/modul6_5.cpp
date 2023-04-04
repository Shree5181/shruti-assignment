#include<iostream>
using namespace std;
class metrix
{
    public:
    int a,b;
    void getdata()
    {
        cout << "enter two values: ";
        cin >> a >> b;
    }
    void showdata()
    {
       cout << "values of a = " << a <<"values of b = "<< b;
    }
    void operator+(metrix s1)
    {
        a=a+s1.a;
        b=b+s1.b;
    }
};
int main()
{
    metrix d1;
    d1.getdata();
    d1.showdata();
    metrix d2;
    d2.getdata();
    d2.showdata();
    d1+d2;     //operator overloading
    d1.showdata();
    return 0;
}