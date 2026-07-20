#include<bits/stdc++.h>
using namespace std;


    int search(vector<int>& arr , int target){
         int n = arr.size();
         int low = 0, high = n-1;
         while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == target) return mid;
            else if(target > arr[mid])  low = mid + 1;
            else high = mid - 1;
         }
         return -1;
    }





int main()
{
   vector<int> arr = {1,3,7,9,11,12,45};
   
  
   int result = search(arr , 3);
   cout << result << endl;






   return 0;
}