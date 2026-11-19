#include <iostream>
using namespace std;


int main () {

int Burger = 45;
int Spaghetti = 60;
int FriedChicken = 75;
int SiomaiRice = 50;
int quantity;
int buy;
int total;

cout<< "===== SCHOOL CANTEEN =====" <<endl;
cout<<"[1] Burger        45 pesos" << endl;
cout<<"[2] Spaghetti     60 pesos" << endl;
cout<<"[3] Fried Chicken 75 pesos" << endl;
cout<<"[4] Siomai Rice   50 pesos" << endl;

cout<<"Enter your Choices: ";
cin>>buy;

switch (buy){

case 1:
cout<< "Enter a quantity: ";
cin>> quantity;

total = Burger * quantity;
cout << "You have order " << quantity << " Burger" << endl;


break;
case 2:
cout<< "Enter a quantity: ";
cin>> quantity;

total = Spaghetti * quantity;
cout << "You have order " << quantity << " Spaghetti" << endl;

break;
case 3:
cout<< "Enter a quantity: ";
cin>> quantity;

total = FriedChicken * quantity;
cout << "You have order " << quantity << " Fried Chicken" << endl;

break;
case 4:
cout<< "Enter a quantity: ";
cin>> quantity;

total = SiomaiRice * quantity;
cout << "You have order " << quantity << " Siomai Rice " << endl;

break;
default:
cout<<"Invalid choice. Please select 1 to 4 only.";

}



cout<< "Total Ammount: "<< total << " pesos" <<endl;



return 0;

}