#include<iostream>
using namespace std;
int main()
 {
    int units;
    float billamount=0,surcharge=0,totalamount=0;
    cout<<" \n My Name is Muhammad Habib";
    cout<<"\n SAP ID : 62669";
	cout<<" \n Enter the units consumed ";
    cin>>units;
    if (units<=100)
	 {
        billamount=(units*5);
    }
	 else if(units>100&&units<=300) 
	{
        billamount=(units*10);
    }
	 else 
	{
        billamount=(units*15);
    }
    if (billamount>500) 
	{
        surcharge=(billamount*0.1);
    }
    totalamount=(billamount + surcharge);
    cout<<"\n Units Consumed "<<units;
    cout<<"\n Bill Amount "<<billamount;
    cout<<"\n Surcharge "<<surcharge;
    cout<<"\n Total Amount Payable "<<totalamount;
    return 0;
}