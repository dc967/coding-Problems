#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    vector<int> nums = {1,7,3,6,5,6};
    int n  = nums.size();
    int pivot = -1;

    for(int i=0; i<n; i++){
       
        int leftsum = 0;
        int rightsum = 0;
        for(int j=0; j<i; j++){
            leftsum += nums[j];
        }
        for(int k=i+1; k<n; k++){
            rightsum += nums[k];
        }
        if(leftsum == rightsum){
            pivot = nums[i];
            break;
        }
    }
     cout << pivot;

   return 0;
}