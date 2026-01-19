#include <iostream>
using namespace std;
int main() 
{
     char students[5][20]={"shazil", "abid", "basit", "asad", "ali"};
    char grades[5]={'B', 'A', 'C', 'D', 'B'};
    int size=5;
    cout<<"Student Grades Report:"<<"\n";
    for(int i=0;i<size;i++) 
	{
        cout<<students[i]<<":"<<grades[i]<<"\n";
    }
    char highestGrade='F';
    int topStudentIndex=-1;
    for(int i=0;i<size;i++) 
	{
        if(grades[i]<highestGrade) 
		{ 
            highestGrade=grades[i];
            topStudentIndex=i;
        }
    }
    cout<<"\nStudent with the highest grade"<<"\n";
    cout<<students[topStudentIndex]<<" with grade "<<highestGrade<<"\n";
    return 0;
}