#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int n = nums.size();
    int maxsum = 0;
    for(int start=0; start<n; start++){
        int currsum=0 ;
        for(int end=start; end<n; end++){
            currsum += nums[end];
            maxsum = max(maxsum,currsum);
        }
    
    }
    cout << maxsum;
    
   return 0;
}