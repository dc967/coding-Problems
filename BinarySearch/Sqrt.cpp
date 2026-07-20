#include<bits/stdc++.h>
using namespace std;


int mySqurt(int n){
    int L = 0;
    int right = n;
    int ans = 0;

    while(L <= right){
        long long mid = L + (right - L)/2;

       if(mid*mid<=n){
        ans = mid;
        L = mid + 1;
       }else{
        right = mid - 1;
       }
    }
    return ans;
}


int main()
{
   int n;
   cin >> n;
   int result = mySqurt(n);
   cout << result << endl;


   return 0;
}