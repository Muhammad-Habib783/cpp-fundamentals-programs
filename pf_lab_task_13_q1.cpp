#include<iostream>
using namespace std;
int calculate_area(int length,int width)
{
	return length*width;
	
}
int main()
{
	int length,width,area;
	cout<<"\n enter a length : ";
	cin>>length;
	cout<<"\n enter a width :";
	cin>>width;
	area=calculate_area(length,width);
	cout<<"\n The area of rectangle is "<<area;
}