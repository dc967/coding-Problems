#include<bits/stdc++.h>
using namespace std;
int main()
{

   vector<vector<int>> matrix = {
         {-1,5,7},
         {9,6,3},
         {4,-1,2}
   };

   int row = matrix.size();
   int col = matrix[0].size();
       int maxelement = INT16_MIN;
   for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
           maxelement = max(matrix[i][j],maxelement );
       }
   }
    cout << " max Element is : " << maxelement << endl;











   return 0;
}