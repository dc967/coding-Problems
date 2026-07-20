#include<bits/stdc++.h>
using namespace std;



int main()
{
    vector<int> arr = {1,1,0,1,1,1,1};
    int n = arr.size();
    int l=0, r=0, maxlen=0;

    for(int r=0; r < n ;r++){
        if(arr[r] ==0){
            l = r+1;
        }
        int len = r-l+1;
        maxlen = max(len,maxlen);
        r++;
    }

   cout << maxlen << endl;



   return 0;
}