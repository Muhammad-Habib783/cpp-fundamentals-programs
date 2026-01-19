#include<iostream>
using namespace std;
int  main()
{
  int one[5];
  int two[10];
  for(int j=0;j<5;j++)
  one[j]=5*j+3;
  cout<<"one contains :";
  for(int j=0;j<5;j++)
  cout<<one[j]<<" ";
  cout<<endl;
  for(int j=0;j<5;j++)
  {
  	two[j]=2*one[j]-1;
  	two[j+5]=one[4-j]+two[j];
  }
  cout<<" Two contains :";
  for(int j=0;j<10;j++)
  {
  cout<<two[j]<<" ";
  cout<<endl;
}
}