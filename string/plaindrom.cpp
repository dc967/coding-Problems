#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s= "madam";
    int n = s.length();
    int left = 0;
    int right = n-1;

    while(left < right){
        if(s[left] != s[right]){
            cout << "not plaindrome";
            return 0;
        }
        left++;
        right--;
    }
    cout << "plaindrome";

   return 0;
}