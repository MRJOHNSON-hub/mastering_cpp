#include <iostream>
using namespace std;
int main(){
int vals[5];
cout<<"enter 5 numbers to be reversed : \n";
for(int i=4; i>=0; i--){
cin>>vals[i];
}

cout<<"the order after being reversed is : ";
for(int i=0; i<5; i++){
cout<<vals[i]<< ' ';
}


    return 0;
}