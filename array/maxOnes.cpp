#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums){
   int cnt = 0;
   int maxi = 0;

   for(int i=0;i<nums.size();i++){
    if(nums[i] == 1){
        cnt++;
        maxi = max(cnt,maxi);
    }
    else{
        cnt = 0;
    }
   }

   return maxi;
    
}

int main()
{
  vector<int> nums = {1,1,0,1,1,1};
  int n = nums.size();

   cout << findMaxConsecutiveOnes(nums) << endl;


   return 0;
}