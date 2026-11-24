#include <iostream>
using namespace std;


int main () {

int balance = 5000;
int pin =1234;
int C;
bool running = true;
int wid;
int enter;
int amount;
int remaining;

cout<< "Enter your PIN: ";
cin>>enter;



if (enter==pin) {


while (running) {

cout<< "===== ATM MENU ====="<<endl;
cout<<"1. Check Balance"<<endl;
cout<<"2. Withdraw"<<endl;
cout<<"3. Deposit"<<endl;
cout<<" 4. Exit"<<endl;


cout<<"Enter your choices";
cin>>C;


switch (C) {

case 1:
cout<< "Current Balance: "<< balance<<endl;

break;
case 2:

cout<< "Enter amount to withdraw: ";
cin>>amount;


if (amount == 0 ){

cout<<"Invalid Amount";


} else if (amount <= balance ){

balance -= amount;
cout <<"Withdrawal successful."<<endl;
cout<< "Remaining balance:"<< balance<<endl;



} else{

cout<<"Invalid Amount";

}



break;
case 3:

cout<< "Enter amount to Deposit: ";
cin>>amount;

if (amount == 0 ){

cout<<"Invalid Amount";


} else{


balance += amount;
cout <<"Deposit successful."<<endl;
cout<< "Updated balance:"<< balance<<endl;

}



break;
case 4:

cout<< "Thank you"<< endl;
running = false;

break;
default:
cout<<"Invalid choices ";
break;

}

}


}else{

cout<<" invalid PIN  ";


}






return 0;
}
