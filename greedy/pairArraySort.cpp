#include<bits/stdc++.h>
using namespace std;





bool cmp( pair<int,int> a, pair<int,int> b ){
    return a.second < b.second;
}
 
int main(){
 
    vector<int> start = {5,1,3,2};
    vector<int> end = {2,4,1,6};

    vector<pair<int,int>> v;
    for(int i=0; i<start.size(); i++){
        v.push_back({start[i],end[i]});
    }
     
    sort(v.begin(),v.end(),cmp);
   
    int count = 1;
    int end2 = v[0].second;
    for(int i=1; i<v.size();i++){
        if(v[i].first > end2){
            count++;
            end2 = v[i].second;
        }
    }
    cout << count << endl;
     
   return 0;
}