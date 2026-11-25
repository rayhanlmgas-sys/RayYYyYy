#include <iostream>
using namespace std;


int main () {

int lovebalance = 0;
bool yes = true;
int c;


while (yes) {

cout<< "===== ACTIONS =====" <<endl;
cout<<"[1] chocolate       1 loverpoint" << endl;
cout<<"[2] Gift            2 loverpoint" << endl;
cout<<"[3] Flowers         3 loverpoint" << endl;
cout<<"[4] Check your progress" << endl;
cout<<"[5] Ask her out"<<endl;

cout<<"Enter your Choices ";
cin>>c;


switch (c) {

case 1:

cout<< "you gave her chocolate plus 1"<<endl;
lovebalance += 1;

break;


case 2:

cout<< "you gave her gift plus 2"<<endl;
lovebalance += 2;


break;


case 3:

cout<< "you gave her flowers plus 3"<<endl;
lovebalance += 3;


break;


case 4:

cout<< "Current Progress:"<< lovebalance <<endl;

break;


case 5:

if (lovebalance >= 10){


cout<< "she said yes CONGRATSSSSSSSSSSSSSSSSSSSSSSSSSSSSS";





} else{

cout<< "aray ko po"<<endl;
cout <<"ayaw daw "<< endl;

}


yes= false;


break;



default:

cout<< "1234 na ngani yung pili mo";

break;

}
}












return 0;

}