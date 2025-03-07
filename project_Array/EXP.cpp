#include <iostream>
#include <array>
using namespace std;
int main(){
int points =0;
int ans[3];
cout<<"enter the sequences\n";
cout<<"sequence 1:\n";
cout<<" 1 || 5 || 10 || 16 || ??\n";
cin>> ans[0];
cout<<"sequence 2:\n";
cout<<" 2 || 4 || 8 || 16 || ??\n";
cin>> ans[1];
cout<<"sequence 3:\n";

cout<<" 1 || 1 || 2 || 3 || ??\n";
cin>>ans[2];

int questions[3][5] = {
{1, 5, 10, 16, 23}
,{2, 4, 8, 16, 32}
,{1, 1, 2, 3, 5}

};
for(int i=0;i<3;i++){
    if(ans[i]==questions[i][4]){
        points++;
    }
}


// if (ans[0]==questions[0][4])
//     points++;

// if (ans[1]==questions[1][4])
//     points++;

// if (ans[2]==questions[2][4])
//     points++;

    cout<<"your points are: "<<points;
return 0;
}