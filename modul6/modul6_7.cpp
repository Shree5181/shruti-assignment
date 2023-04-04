#include<iostream>
using namespace std;
class cricketer
{
    public:
    int run[5];
    void getrun()
    {
        cout<<"enter run: ";
        for(int i=0;i<5;i++)
        {
        cin>>run[i];
        }
    }
    
    void showrun()
    
    {
        for(int i=0;i<5;i++)
        {
        cout<<"value of run"<<run[i]<<endl;
        }
    }
    
};
class batsman:public cricketer
{
    public:
    int totalrun=0;
    float averageruns;
    int performance;
    void gettotal()
    {
    for(int j = 0;j < 5;j++)
        {
            totalrun=totalrun+run[j];
            
        }
        cout<<"Total Run= "<<totalrun<<endl;
    }
    void calculateaverageruns()
    {
       averageruns= totalrun/5;
       cout<<"Average run= "<<averageruns<<endl;
    }
    void bestperformance()
    {
        for(int i=0;i<5;i++)
        {
            if (averageruns<run[i])
            {
                cout<<"Best Performance = "<<run[i]<<endl;
            }
        }
    }

};

int main()
{
    batsman b1;
    b1.getrun();
    b1.showrun();
    b1.gettotal();
    b1.calculateaverageruns();
    b1.bestperformance();

    return 0;
}