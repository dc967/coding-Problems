#include<bits/stdc++.h>
using namespace std;

 void reverse(vector<int>& arr, int start,int end){
      while(start <end){
         swap(arr[start] , arr[end]);
         start++;
         end--;
      }
 }




int main()
{

  vector<int> arr = {1,2,3,4,5,6,7};
  int k = 3;
  int n = arr.size();
  k = k%n;

  reverse(arr,0,n-1);
  reverse(arr,0,k-1);
  reverse(arr,k,n-1);

 for(int i=0;i<n;i++){
    cout << arr[i] ;
 }







   return 0;
}