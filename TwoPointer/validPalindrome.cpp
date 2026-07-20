#include<bits/stdc++.h>
using namespace std;
int main()
{

      string s = "mada";
      int n = s.length();
      int left = 0;
      int right = n-1;

      bool palindrome = true;

      while(left < right){
        if(s[left] != s[right]){
            palindrome = false;
            break;
        }
        left++;
        right--;
      }
      if(palindrome){
        cout << "true";
      }else{
        cout << "false";
      }





   return 0;
}