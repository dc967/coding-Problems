#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {6,7,8,4,1};
    
    int nums = 4;

    for(int i=0; i<5; i++){
        if(arr[i] == nums){
            cout << i << endl;
        }
        else{
            cout << -1 << endl;
        }
    }





   return 0;
}