#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
    int x;
    cout<<"Enter value of x ";
    cin>>x;
    int a=22,b=31,c=14,d=5,e=5;
    double leftSide=pow(a,x)+pow(b,x)+pow(d,x)+pow(e,pow(x,2));
    double rightSide=a*pow(c,x);
    cout<<"Left side"<<leftSide<<"\n";
    cout<<"Right side "<<rightSide<<"\n";
    if (leftSide==rightSide) 
	{
        cout<<"The equation is satisfied"<<"\n";
    }
	 else
	 {
        cout<< "The equation is not satisfied"<<"\n";
    }
      system("pause");
    return 0;
}