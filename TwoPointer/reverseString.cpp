#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s = "dinesh";
    int n = s.length();
    int left = 0;
    int right = n-1;

    while(left < right){

        swap(s[left] , s[right]);
        left++;
        right--;
    }

    cout << s << endl;








   return 0;
}