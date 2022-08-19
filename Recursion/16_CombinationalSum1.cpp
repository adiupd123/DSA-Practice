#include<bits/stdc++.h>
using namespace std;
void findCombinations(int ind, vector<int> arr, vector<int> &a,vector<vector<int>> &ans, int target){
    if(target==0){
        ans.push_back(a);
        return;
    }
    if(ind>=arr.size() || target<0)
        return;
    //Picking an index
    a.push_back(arr[ind]);
    findCombinations(ind, arr, a, ans, target-arr[ind]);
    //Not picking an index
    a.pop_back();
    findCombinations(ind+1, arr, a, ans, target);
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n, target;
    cin>>n>>target;
    vector<int> arr(n), a;
    vector<vector<int>> ans;
    for(auto& it:arr)
        cin>>it;
    findCombinations(0, arr, a, ans, target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<"\n";
    }
    return 0;

}