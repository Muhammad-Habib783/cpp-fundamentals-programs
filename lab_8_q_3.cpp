#include <iostream>
using namespace std;
int main() 
{
    
    float sales,totalsales=0, averagesales;

    
    cout<<"Enter sales data for 7 days"<<"\n";
    for (int i=0; i < 7; i++) 
	{
        cout<< "Day " << i + 1 << ": ";
        cin>> sales;  
        totalsales=totalsales+sales;  
    }
    averagesales=totalsales/7;
    cout << "Total sales for the week"<<totalsales<<"\n";
    cout << "Average sales per day"<<averagesales<<"\n";

    return 0;
}