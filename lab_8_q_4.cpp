#include <iostream>
using namespace std;

int main() {
    float price;        
    float totalcost=0; 
     cout<<"Enter the prices of items in your shopping list"<<"\n";
	   cout<<"Enter -1 when you are done"<<"\n";
	   cout<<"Enter price ";
        cin>>price;
        while (price!=-1) 
	{
        cout<<"Enter price ";
        cin>>price;
        
        totalcost=totalcost+price;
    }
    cout<<"Total cost of items "<<totalcost<<"\n";
	return 0;
}