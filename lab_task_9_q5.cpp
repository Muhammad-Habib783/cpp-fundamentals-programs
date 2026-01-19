#include <iostream>
#include <iomanip>
using namespace std;
int main()
 {
    int daysinMonth, startday;
    cout<<"Enter the number of days in a month: ";
    cin>>daysinMonth;
    cout<<"Enter the start day of the week 0 for Sunday , 1 for Monday,2 for Tuesday,3 for Wednesday,4 for Thursday,5for Friday, 6 for Saturday :";
    cin>>startday;
     cout<< "Sun Mon Tue Wed Thu Fri Sat \n";
    for(int i=0;i<startday;i++) 
	{
        cout << "    "; 
    }

    for (int day=1;day<=daysinMonth;day++) 
	{
        cout<<setw(3)<<day<<" ";
        if((day + startday)%7==0)
		 {
            cout<<endl;
        }
    }
cout << endl; 
return 0;
}