#include<iostream>
using namespace std;
class lecture_ditails
{
   public:
   string lecture_name;
   string subject_name;
   string course_name;
   int no_of_lecture;
   void getdata()
   {
   cout<<"\n Enter lecture name: ";
   cin>>lecture_name;
   cout<<"\nEnter subject name: ";
   cin>>subject_name;
   cout<<"\nEnter course name: ";
   cin>>course_name;
   cout<<"\nEnter no of lecture: ";
   cin>>no_of_lecture;
   }
   void showdata()
   {
     cout<<"lecture name: "<<lecture_name<<endl;
     cout<<"subject name: "<<subject_name<<endl;
     cout<<"course name: "<<course_name<<endl;
     cout<<"no of lecture: "<<no_of_lecture<<endl;
   }
};
int main()
{
      lecture_ditails obj[5];
      for(int i = 0;i < 5;i++)
      {
        obj[i].getdata();
        obj[i].showdata();
      }


    return 0;
}