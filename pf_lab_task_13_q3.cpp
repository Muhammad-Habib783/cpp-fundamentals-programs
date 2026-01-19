#include <iostream>
using namespace std;
int volumeOfcuboid(int length,int width = 4,int height = 5)
 {
    return length * width * height;
}
int main()
 {
    double length,width,height;
    cout<<"Enter length,width,height ";
    cin>>length>>width>>height;
    cout<<"\n  volume with arguments "<<volumeOfcuboid(length, width, height);
    cout<<"\n enter length";
    cin>>length;
    cout<<" \n  volume with default width and height "<<volumeOfcuboid(length);
    return 0;
}