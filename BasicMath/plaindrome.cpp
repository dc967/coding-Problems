#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x = 4551;
  
  int orignal = x;
  int rev = 0;

  while(x > 0){
     int digit = x % 10;
     rev = rev * 10 + digit;
     x = x / 10;
  }

  if(orignal == rev){
    cout << "yes" << endl;
  }
  else{
    cout << "No" << endl;
  }






   return 0;
}