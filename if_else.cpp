#include<iostream>
using namespace std;

int main() {
    int num1,num2,result;
    cout << "Enter first integer: ";
    cin >> num1;
	 cout << "Enter second  integer: ";
    cin >> num2;
	result=(num1/num2);

    if (result % 2 == 0)
	{
        cout << result<< " is even."<<endl;
	}
    else
	{
        cout << result<< " is odd.\n"<<endl;
	}

	
	system ("pause");
		return 0;
}
