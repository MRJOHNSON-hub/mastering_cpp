#include <iostream>
using namespace std;
int main(){
int nums[] = {10, 20, -20, 13, 30, -30, 40 };
int sum= 0;
int size_num = size(nums);
for(int i=0; i<size_num; i++){
    if(nums[i]%2==0 && nums[i]>0)
    sum+=nums[i];
    else
    continue;

}
cout<<"the result is : "<<sum;
    return 0;
}