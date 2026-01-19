#include<iostream>
using namespace std;
int main()
 {
    float  totalPurchase,discount=0, finalAmount;
    cout<<" \n My Name is Muhammad Habib";
    cout<<"\n SAP ID : 62669";
    cout<<" \n Enter the total purchase amount  ";
    cin>>totalPurchase;
   if(totalPurchase>5000)
    {
        discount=(totalPurchase*0.2);
    }
	 else if(totalPurchase>=3000&&totalPurchase<=5000)
	  {
        discount=(totalPurchase*0.1);
    }
     finalAmount=(totalPurchase-discount);
    cout<<"\n your original price is  "<<totalPurchase;
    cout<<"\n discount applied is "<<discount;
    cout<<"\n your final amount to pay is  "<<finalAmount;
	 return 0;
}