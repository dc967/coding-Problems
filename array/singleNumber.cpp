#include<iostream>
#include<vector>
#include<map>


using namespace std;


int singleNumber(vector<int> &nums){
   /* int result = 0;
    for(int i=0; i<nums.size();i++){
        result = result ^ nums[i];
    }
    return result;*/


    int n = nums.size();

    map<long long , int> mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    for(auto it : mp){
        if(it.second == 1){
            return it.first;
        }
    }
}




int main()
{
  vector<int> nums = {2,2,1};
  int n = nums.size();

   cout << singleNumber(nums) << endl;


   return 0;
}