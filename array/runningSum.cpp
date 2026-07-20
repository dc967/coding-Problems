#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    vector<int> result;
    int currsum = 0;
    for(int i=0; i<n; i++){
        currsum += nums[i];
        result.push_back(currsum);
    }

    for(int j=0; j<result.size(); j++){
        cout << result[j] << endl;
    }



   return 0;
}