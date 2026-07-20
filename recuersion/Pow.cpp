#include<bits/stdc++.h>
using namespace std;

 double pow(double x , int n){
    //base case
    if(n ==0 && x == 1.0) return 1;

    long long temp = n; //integer overflow

    //negative 
    if(n < 0){
        x = 1/x;
        
        temp = -1 * 1LL * n;
    }

    double ans = 1;
    for(long long i=0;i<temp;i++){
        ans *= x;
    }
    return ans;
 }






int main()
{

  double result = pow(2.10000, 3);
  cout << result << endl;
   






   return 0;
}