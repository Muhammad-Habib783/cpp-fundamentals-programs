#include<iostream>
using namespace std;
int main()
 {
 	int physics,chemistry,biology,mathematics,computer,choice;
 	 float TM,percentage;
 	cout<<"\n enter first subject marks ";
 	cin>>physics;
 	cout<<"\n enter second subject marks ";
 	cin>>chemistry;
 	cout<<"\n enter third subject marks ";
 	cin>>biology;
 	cout<<"\n enter fourth subject marks ";
 	cin>>mathematics;
 	cout<<"\n enter fifth subject marks ";
 	cin>>computer;
 	TM=(physics+chemistry+biology+computer+mathematics);
	 if(percentage>=90)
 	{
 		choice=1;
	 }
	 if(percentage>=80)
 	{
 		choice=2;
	 }
	 if(percentage>=70)
 	{
 		choice=3;
	 }
	 if(percentage>=60)
 	{
 		choice=4;
	 }
	 if(percentage>=50)
 	{
 		choice=5;
	 }
	 if(percentage<40)
 	{
 		choice=6;
	 }
 	switch(choice)
 	{
 		case 1:
 			cout<<"\n grade A";
 			break;
 			case 2:
 			cout<<"\n grade B";
 			break;
 			case 3:
 			cout<<"\n grade C";
 			break;
 			case 4:
 			cout<<"\n grade D";
 			break;
 			case 5:
 			cout<<"\n grade E";
 			break;
 			case 6:
 			cout<<"\n grade F";
 			break;
 			}
 percentage=(TM/500)*100;
 cout<<"\n your  percentage  is "<<percentage<<"%";
 return 0;
 } 
 