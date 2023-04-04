#include<iostream>
using namespace std;
class student
{
    public:

    char name[20];
    int age;
    void getdata()
    {
        cout<<"\n---------------------------";
        cout<<"\nEnter student name: ";
        cin>>name;
        cout<<"\nEnter age: ";
        cin>>age;
    }
    void putdata()
    {
        cout<<"\n-----------------------";
        cout<<"\n**********student marklist**********";
        cout<<"\n----------------------";
        cout<<"\nstudent name: "<< name<<endl;
        cout<<"\nage: "<<age;
    }

};
class studentexam:public student
{
public:
      int sub1,sub2,sub3,sub4,sub5,sub6;
      float percentage;
      public:
      void accept_data()
      {
        getdata();
        cout<<"\nEnter marks for subject 1: ";
        cin>>sub1;
        cout<<"\nEnter marks for subject 2: ";
        cin>>sub2;
        cout<<"\nEnter marks for subject 3: ";
        cin>>sub3;
        cout<<"\nEnter marks for subject 4: ";
        cin>>sub4;
        cout<<"\nEnter marks for subject 5: ";
        cin>>sub5;
        cout<<"\nEnter marks for subject 6: ";
        cin>>sub6;
      }
      void display_data()
      {
        putdata();
        cout<<"\n marks of subject 1: "<<sub1;
        cout<<"\n marks of subject 2: "<<sub2;
        cout<<"\n marks of subject 3: "<<sub3;
        cout<<"\n marks of subject 4: "<<sub4;
        cout<<"\n marks of subject 5: "<<sub5;
        cout<<"\n marks of subject 6: "<<sub6;
      }
};
class studentresult:public studentexam
{
    public:
    void calculate()
    {
        percentage=(sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
        cout<<"\n\n total percentage: "<<percentage;
        cout<<"\n------------------\n";
    }
};
int main()
{
    studentresult str;
    int cnt,i;
    cout<<"Enter no.of student you want?:";
    cin>>cnt;
    for(i=0;i<cnt;i++)
    {
        str.accept_data();
        str.display_data();
        str.calculate();
    }
    return 0;
}
