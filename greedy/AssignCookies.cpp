#include<bits/stdc++.h>
using namespace std;
int main()
{

   vector<int> g = {1,2,3};
   vector<int> s = {1,1};
   /*int n = g.size();
   int m =; s.size();
   vector<bool> used(m,false);
   int count = 0;
   for(int i=0; i<n ;i++){
    for(int j=0; j<m; j++){
        if(s[j] >= g[i]){
            count++;
            used[j] = true;
            break;
        }
    }
   }
  cout << count << endl;*/

  //greedy approach
  
  sort(g.begin(),g.end());
  sort(s.begin(),s.end());
  int count = 0;
  int i=0;
  int j=0;

  while (i <g.size() && j < s.size())
  {
     if(s[j] >= g[i]){
        count++;
        i++;
        j++;
     }else{
        j++;
     }
  }
  cout << count;
  







   return 0;
}