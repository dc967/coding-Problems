#include<iostream>
#include<vector>
using namespace std;

int subArraySum(vector<int> &nums, int k){

    int n = nums.size();

    int ans = 0;

    for(int i=0;i<n;i++){

        int sum = nums[i];

        if(sum == k){
            ans++;
        }

        for(int j=i+1;j<n;j++){
            sum += nums[j];

            if(sum == k){
                ans++;
            }
        }
    }

    return ans;
}
    




int main()
{

   vector<int> nums = {1,2,3};
    int k = 3;


  cout << subArraySum(nums,k) << endl;




   return 0;
}