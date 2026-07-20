#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n){
    if(n < 0) return false;
    if(n ==1) return true;

    while(n% 2 ==0){
        n /=2;
    }
    return n == 1;
}



int main()
{
  int n;
  cin >> n;
  bool result = powerOfTwo(n);
    if(result){
        cout<< "yes it is power ofd two" << endl;
    }
    else{
        cout<< "no it is not power of two" << endl;
    }

   return 0;
}