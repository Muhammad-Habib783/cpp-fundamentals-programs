#include<iostream>
using namespace std;
int main() 
{
    int mark1,mark2,mark3;
    cout<<"Enter three assignment marks: ";
    cin>>mark1>>mark2>>mark3;

    if(mark1 > 50 && mark2 > 50 && mark3 > 50)
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;

    return 0;
}