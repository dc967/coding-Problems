#include<bits/stdc++.h>
using namespace std;
int main()
{

  vector <int> nums = {-2,-1,1,2,3};
  int n = nums.size();

  int Negcnt = 0;
  int Poscnt = 0;

  

  for(int i=0;i<n;i++){
    if(nums[i] <0){
        Negcnt++;
    }
    else if(nums[i] > 0){
        Poscnt++;
    }
  }

 

  int maxi = max(Negcnt,Poscnt);
 

  cout << maxi <<  endl;




   return 0;
}