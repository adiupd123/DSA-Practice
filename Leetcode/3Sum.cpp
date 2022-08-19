#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int i, j, k;
    for(i=0;i<nums.size();i++){
        j = i+1;
        k = nums.size()-1;
        if(i==0 || (i>0 && nums[i]!=nums[i-1])){
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while(j<k && nums[j+1]==nums[j])
                        j++;
                    while(j<k && nums[k-1]==nums[k])
                        k--;
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0)
                    j++;
                else
                    k--;
            }
        }
    }
    return ans;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    vector<int> nums;
    int n;
    cin>>n;
    for(auto &it:nums)
        cin>>it;
    // vector<vector<int>> triplets = ;
    for(int i=0;i<threeSum(nums).size();i++){
        for(int j=0;j<threeSum(nums)[i].size();j++)
            cout<<threeSum(nums)[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}