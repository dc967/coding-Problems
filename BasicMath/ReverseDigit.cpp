#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    int n = 153;
    int orignal = n;
    int sum = 0;

    while(n > 0 ){
       int digit = n % 10;
       int cube = digit * digit * digit;
       n = n/10;
       sum += cube;
    }

   if(orignal == sum){
    cout << "yes" << endl;
   }
   else{
    cout << " no " << endl;
   }






   return 0;
}