#include<bits/stdc++.h>
using namespace std;




int main()
{

  vector<int> arr = {1,1,2,2,2,2,2,3};
 /* int n = arr.size();

  int count = 0;
  int x= 2;
  for(int i=0;i<n;i++){
    if(arr[i] == x){
        count++;
    }
  }
  cout << count << endl;*/

  unordered_map<int,int> mp;
  int n = arr.size();
  int x= 2;

  for(int s : arr){
     mp[s]++;
  }
 cout << mp[2] << endl;



   return 0;
}