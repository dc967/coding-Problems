#include<bits/stdc++.h>
using namespace std;
int main()
{

   vector<int> arr = {2,4,6,7,3,1};
  /* int sum = 0;
   int n  = arr.size();
   for(int i=0; i<n; i++){
     sum += arr[i];
   }

   cout << sum << endl;*/
    int n = arr.size();
/*  for(int i=0; i<n; i++){
     if(arr[i] % 2 == 0){
        cout << arr[i] ;
     }else{
        cout << arr[i] ;
     }
  }*/


  // for(int i=n-1; i>=0; i--){
  //    cout << arr[i] << endl;
  // }


   sort(arr.begin(),arr.end());
   cout << arr[n-2];



   return 0;
}