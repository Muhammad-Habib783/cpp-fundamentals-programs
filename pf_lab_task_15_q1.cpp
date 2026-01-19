#include<iostream>
using namespace std;
struct student
{
    string name;
    int roll_no;
    double marks[3];
    int total_marks;
};
int main()
{
    for(int i=0;i<5;i++)
    {
        student s;
        cout<<"\n enter roll no of student "<<i+1;
        cin>>s.roll_no;
        cin.ignore();
        cout<<"\n enter name of  student "<<i+1;
        getline(cin,s.name);
        cout<<"enter student marks in three subjects ";
        for(int j=1;j<=3;j++)
        {
            cin>>s.marks[j];
        }
        s.total_marks=s.marks[1]+s.marks[2]+s.marks[3];
        cout<<"\n student name is "<<s.name;
        cout<<"\n student roll no is "<<s.roll_no;
        cout<<"\n student total marks is "<<s.total_marks;
    }
}