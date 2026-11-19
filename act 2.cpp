#include <iostream>
using namespace std;


int main () {

int amount;
int available = 5000;
int pin;
int correctpin = 1234;
int remaining;

cout<<"Enter ur PIN: ";
cin>>pin;


if (correctpin == pin ) {

cout<< "Enter amount to withdraw:";
cin>>amount;

if (amount <= available) {

remaining = available - amount;
cout <<"Withdrawal successful."<<endl;
cout<< "Remaining balance:"<< remaining<<endl;


}else {

    cout<<"Insufficient balance.";

}

} else {
    cout<< "Incorrect PIN. Transaction cancelled.";

 }



return 0;

}