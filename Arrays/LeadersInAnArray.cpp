#include<bits/stdc++.h>
using namespace std;
vector<int> findLeaders(int arr[], int n){
    vector<int> ans;

    /**
     * @brief Approach 1: Naive Approach
     * Time Complexity: O(n*n)
     * Space Complexity: O(n)
     */
    // for(int i=0;i<n;i++){
    //     bool leader = true;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>=arr[i]){
    //             leader = false;
    //             break;
    //         }
    //     }
    //     if(leader)
    //         ans.push_back(arr[i]);
    // }

    /**
     * @brief Approach 1: Naive Approach
     * Time Complexity: O(n)
     * Space Complexity: O(n)
     */
    
    int curLeader = arr[n-1];
    ans.push_back(curLeader);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>curLeader){
            curLeader = arr[i];
            ans.push_back(curLeader);
        }
    }
    reverse(ans.begin(), ans.end());

    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> ans = findLeaders(arr, n);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}