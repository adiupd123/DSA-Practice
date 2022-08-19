#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        sort(items2.begin(), items2.end());
        vector<vector<int>> ret;
        vector<int> pair(2);
        for(int i=0;i<items1.size();i++){
            int beg = 0, end = items2.size()-1;
            int mid = (beg+end)/2;
            int flag = 0;
            while(beg<=end){
                if(items1[i][0]==items2[mid][0]){
                    pair[0]=items1[i][0];
                    pair[1]=items1[i][1]+items2[mid][1];
                    flag = 1;
                    break;
                }
                else if(items1[i][0]<items2[mid][0])
                    end  = mid - 1;
                else
                    beg = mid + 1;
            }
            if(!flag && pair[0]==pair[1] && pair[0]==0){
                pair[0]=items1[i][0];
                pair[1]=items1[i][1];
            }
            ret.push_back({pair[0], pair[1]});
            pair.clear();
        }
        return ret;
    }
int main() {
  vector<vector<int>> a, b, output;
  a = {{1,1},{4,5},{3,8}};
  b = {{3,1},{1,5}};
  output = mergeSimilarItems(a, b);
  for(int i=0;i<output.size();i++){
    for(int j=0;j<2;j++){
      cout<<output[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}