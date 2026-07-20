#include<bits/stdc++.h>
using namespace std;
int main()
{

   vector<int> arr = {2,5,4,3,7,8,9};
   int mini = arr[0] ;
   int maxi = arr[0] ;
   int n = arr.size();
   for(int i=0; i<n; i++){
     mini = min(arr[i],mini);
     maxi = max(arr[i], maxi);
   }
   cout << mini << " " << maxi << endl;







   return 0;
}