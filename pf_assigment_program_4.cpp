#include <iostream>
using namespace std;
int main()
 {
    int secretNumber=7,guess; 
    cout<<" \n My Name is Muhammad Habib";
    cout<<"\n SAP ID : 62669";
    cout<<" \n Guess the number between 1 and 10 you have 3 attempts \n";
    for(int attempts=1;attempts<= 3;attempts++)
	 {
        cout<< "Attempt "<<attempts;
        cin>>guess;
		 if (guess==secretNumber) 
		 {
            cout<<"\n You guessed it  Well done \n";
            return 0;
        }
		 else if(guess<secretNumber)
		 {
            cout<<"\n Too low ";
        }
		 else
		 {
            cout<<"\n Too high ";
        }
    }

    cout << "\n Game over the number was "<<secretNumber;
    return 0;
}