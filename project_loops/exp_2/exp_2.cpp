#include <iostream>
using namespace std;
int main(){
 
    int guessnum = 7;
    int guesstries =0;
    int num;
       cout<<"guess the number between 1 & 10 :\n";
    for(int i=0; i<5; i++){
       cin>>num;
       if(num == guessnum){
       cout<<"correct answer";
       break;
       }
       else{
       cout<<"try again : ";
       if(i==4)
       cout<<"sorry the right answer is : 7";
       }

    }
    return 0;
}
