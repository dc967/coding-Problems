#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
      int row = matrix.size();
      int col = matrix[0].size();
    vector<vector<int>> ans(col , vector<int>(row));
    
    for(int i=0; i< row; i++){
        for(int j=0; j< col; j++){
            ans[j][i] = matrix[i][j];
        }
    }
      
    for()





   return 0;
}