#include<iostream>
using namespace std;
int main()
{
float m1,m2,m3,TM=300,OM;
float percentage;
cout<<" \n My Name is Muhammad Habib";
cout<<"\n SAP ID : 62669";
cout<<"\n enter   marks of first subject (out of  100) ";
cin>>m1;
if( m1<0||m1>100)
{
cout<<"invalid value plz enter a marks less than or equal to 100 and greater than 0 ";
cin>>m1;
}
cout<<"\n enter mark of second subject  (out of  100)";
cin>>m2;
if( m2<0||m2>100)
{
cout<<"invalid value plz enter a marks less than or equal to 100 and greater than 0 ";
cin>>m2;
}
cout<<"\n enter mark of second subject  (out of  100)";
cin>>m3;
if( m3<0||m3>100)
{
cout<<"invalid value plz enter a marks less than or equal to 100 and greater than 0 ";
cin>>m3;
}
OM=(m1+m2+m3);
cout<<"\n The total marks are "<<TM;
cout<<"\n The obtain marks are "<<OM;
percentage=(OM/TM*100);
cout<<"\n The Total percentage is "<<percentage<<"%";
if(percentage>=90&&percentage<=100)
{
cout<<"\n Your  grade is  A+ :congradulations  You are pass";
}
else if(percentage>=80&&percentage<=89)
{
cout<<"\n Your  grade is  A :congradulations You are pass";
}
else	if(percentage>=70&&percentage<=79)
{
cout<<"\n Your  grade is  B :congradulations You are pass";
}
else if(percentage>=60&&percentage<=69)
{
cout<<"\n Your  grade is  C :congradulations You are pass";
}
else if(percentage<60)
{
cout<<"\n your grade is F : you are fail   ";
}
else
{
cout<<"\n you enter an invalid value ";
}
return 0;
}
