#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
     int k = 2;
     int left = 0;
     int zero = 0;
     int maxlen = 0;

     for(int right = 0; right<nums.size();right++){
        if(nums[right] == 0){
            zero++;
        }

        while(zero > k){
            if(nums[left] ==0 ){
                zero--;
            }
            left++;
        }
        int len = right-left+1;
        maxlen = max(len,maxlen);
     }

      cout << maxlen << endl;






   return 0;
}