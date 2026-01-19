#include<iostream>
using namespace std;
struct items
{
int item_id;
string item_name;
float price;
int quantity; 
};
void item1()
{
    for(int i=0;i<10;i++)
    {
        items it;
       float total_item;
        cout<<"\n enter the  item id "<<i+1<<"=";
        cin>>it.item_id;
        cin.ignore();
        cout<<"\n enter the item name =";
        getline(cin,it.item_name);
        cout<<"\n enter the item  price =";
        cin>>it.price;
        cout<<"\n enter the  item quantity =";
        cin>>it.quantity;
        total_item=(it.price*it.quantity);
        cout<<"\n the item id "<<it.item_id;
        cout<<"\n item name is "<<it.item_name;
        cout<<"\n item price is "<<it.price;
        cout<<"\n item quantity is "<<it.quantity;
        cout<<"\n Total value of each item  is "<<total_item;
    }
}
int main()
{
    item1();
}