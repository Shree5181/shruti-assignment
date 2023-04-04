#include<iostream>
using namespace std;
class account
{
    public:
    int min=500;
    char name[20];
    long accountno;
    float balance;
    void gatdata()
    {
        cout<<"Enter customer name: ";
        cin.ignore();
        gets(name);
        cout<<"Enter account no.: ";
        cin>>accountno;
        cout<<"Enter opening balance: ";
        cin>>balance;
    }
    void display()
    {
        cout<<"customer name: "<<name<<endl;
        cout<<"account no: "<<accountno<<endl;
        cout<<"balance :"<<balance;
    }
};
class current:public account
{
    public:
    float deposit,with,pen;
    void deposit1()
    {
        cout<<endl<<"Enter money to deposit: ";
        cin>>deposit;
        display();
        balance=balance+deposit;
        cout<<endl<<"after deposit main balance is : "<<balance<<endl;

    }
    void withdraw()
    {
        cout<<endl<<"Enter money to withdraw: ";
        cin>>with;
        if(with<balance)
        {
            display();
            balance=balance-with;
            cout<<endl<<"after withdraw main balance is :"<<balance<<endl;

        }
        else
        {
            cout<<endl<<"you cannot withdraw money....."<<endl;
        }
    }
    void check_bal()
    {
        if(balance<min)
        {
            cout<<"opening balance should not be less than 500...."<<endl;
            balance=balance-150;
            cout<<endl<<"after penalty main balance is :"<<balance<<endl;
        }
    }
};
class savings:public account
{
    public:
    float deposit,with,intr;
    void deposit1()
    {
        cout<<endl<<"Enter money to deposit:";
        cin>>deposit;
        display();
        balance=balance+deposit;
        cout<<endl<<"after deposit main balance is: "<<balance<<endl;

    }
    void withdraw()
    {
        cout<<endl<<"Enter money to withdraw:";
        cin>>with;
        if(with<balance)
        {
            display();
            balance=balance-with;
            cout<<endl<<"after withdraw main balance is:"<<balance<<endl;

        }
        else
        {
            cout<<"you cannot withdraw money...."<<endl;

        }
    }
    void cal_intr()
        {
            intr=(balance*2)/100;
            balance=balance+intr;
            cout<<endl<<"after calculating interest balance is: "<<balance;
        }
    };
int main()
    {
        current c;
        savings s;
        char ch;
        int choice,ch2;
        cout<<"Enter 's' for saving and'c' for current:";
        cin>>ch;
        if(ch=='c'||ch=='C')
        {
            c.gatdata();
            c.check_bal();
            l2:
            cout<<"\n 1. display \n 2.deposit\n 3.withdraw\n 4.exit\n";
            cout<<"Enter your choice:";
            cin>>choice;
            switch(choice)
            {
                case 1: 
                {
                    c.display();
                goto l2;
                break;
                }
                case 2:
                { c.deposit1();
                goto l2;
                break;
                }
                case 3:
                { c.withdraw();
                goto l2;
                break;
                }
                case 4:
                { exit(0);
                }


            }
        }
        
        else if(ch=='s'||ch=='S')
        {
            s.gatdata();
            l1:
            cout<<"\n 1. display \n 2.deposit\n 3.withdraw\n 4.calculate iterest\n 5.exit\n";
            cout<<"Enter your choice:";
            cin>>ch2;
            switch(ch2)
            {
                case 1: 
                {s.display();
                goto l1;
                break;
                }
                case 2: {s.deposit1();
                goto l1;
                break;}
                case 3:{ s.withdraw();
                goto l1;
                break;}
                case 4:{ s.cal_intr();
                goto l1;
                break;}
                case 5:
                {exit(0);}
            }


        }
        else
        cout<<"wrong choice..........."<<endl;

    }

    

