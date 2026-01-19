#include<iostream>
using namespace std;
int main()
{
	int products,stock,total_stock=0;
	cout<<"\n enter the number of products ";
	cin>>products;
	for(int i=1;i<=products;i++)
	{
		cout<<"\n enter the stock level for  product "<<i<<":";
		cin>>stock;
	}
	for(int j=0;j<products;j++)
	{
		total_stock=total_stock+stock;
		
	}
	cout<<"\n total stock is "<<total_stock;
	system("pause");
	return 0;
}