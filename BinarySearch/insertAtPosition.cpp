#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,3,5,6};
    int target = 2;

    int low = 0;
    int high = arr.size() - 1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            cout << mid;
            return 0;
        }else if(target > arr[mid]){
            low = mid+1;
        }else{
            high = mid - 1;
        }

      
    }
    cout << low;





   return 0;
}