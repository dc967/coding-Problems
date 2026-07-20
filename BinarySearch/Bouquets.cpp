#include<bits/stdc++.h>
using namespace std;






int main()
{
   
  vector<int> bloomDay = {1,10,3,10,2};
  int m = 2;
  int k = 3;
  int n = bloomDay.size();
  vector<int> ans;
  if(n < m*k){
     return -1;
  }
int maxi = *max_element(bloomDay.begin(),bloomDay.end());

for(int day=1; day<=maxi; day++){
    int cnt = 0;
    int bouquests = 0;
   for(int i=0;i<n;i++){
    if(bloomDay[i] <= day){
        cnt++;
    }else{
        cnt = 0;
    }

    if(cnt == k){
        bouquests++;
        cnt = 0;
    }
   }
   if(bouquests >=m){
    cout << day;
    return 0;
   }
}
cout << -1;

   return 0;
}