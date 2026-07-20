#include<bits/stdc++.h>
using namespace std;
int main()
{

int N = 12345;

int cnt = 0;
while(N > 0){
    cnt = cnt + 1;
    N = N/10;
}
cout << cnt << endl;

   return 0;
}