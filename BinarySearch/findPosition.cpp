#include<bits/stdc++.h>
using namespace std;




int main()
{

  vector<int> nums = {5,7,7,8,8,10};

  int target = 8;
  int n = nums.size();
  int first = -1 , last = -1;

  for(int i=0;i<n;i++){
    if(nums[i] == target){
         if(first == -1){
            first = i;
         }
         last = i;
    }
   
  }
  cout << "[" << first << "," << last << "]";
  

 
 



   return 0;
}