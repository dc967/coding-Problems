#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums = {2,2,2,2,5,5,5,8};
    int k = 3;
    int threshold = 4;
    int n = nums.size();
    int count = 0;

    for(int i=0; i<=n-k; i++){
        int sum  = 0;
        for(int j=i; j<i+k; j++){
          sum += nums[j];
        }
         int average = sum/k;
         if(average >= threshold){
            count++;
         }
        
    }
    cout << count;
   return 0;
}