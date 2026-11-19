#include <iostream>
using namespace std;


int main () {

int demand;
int b=40;
int fee = 40;
int final;


cout<<"Enter Number of hours parked:";
cin>> demand;

if ( demand==0  ) {

   cout<< "invalid number"<<endl;


}else if  ( demand <= 3 ) {

cout<<"Parking fee: 40";

} else {

final= fee + (demand-3) *20;
cout <<"Parking fee:"<< final <<endl;

}


return 0;


}














