#include<iostream>
using namespace std;
class line
{
    public:

    inline themultiplication(float x,float y)
    {
        return x*y;
    }
    inline thecubic(float x)
    {
       return x*x*x;
    }
};
int main()
{
    line obj;
    float values1,values2;
    values1=obj.themultiplication(34,3);
    values2=obj.thecubic(4);
    cout<<values1<<endl;
    cout<<values2<<endl;
    return 0;
}