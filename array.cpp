#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string names[10];
    cout<<"enter 10 names"<<endl;
    for(int i=0;i<10;i++)
    {
      cout<<"enter name "<<i+1<<":";
       getline(cin,names[i]);
    }
  for(int i=0;i<10;i++)
    {
     cout<<i+1<<"."<<names[i]<<endl;
    }
    return 0;
}