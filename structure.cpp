#include<iostream>
#include<string>
using namespace std;
struct student
{
  int sapid;
  float marks;
  string name;
};
void  get()
{
    student s;
    cout<<"\n Enter the student sap id";
    cin>>s.sapid;
    cout<<"\n Enter student marks";
    cin>>s.marks;
    cin.ignore();
    cout<<"\n Enter student name";
    getline(cin,s.name); 
}
void display()
{
    student s;
    cout<<"\n  The student marks  is :"<<s.marks;
    cout<<"\n  The student sap id  is :"<<s.sapid;
    cout<<"\n  The student name is :"<<s.name;
}
int main()
{
    get();
    display();
    return 0;
}
