#include<bits/stdc++.h>
using namespace std;
void countFrequency(int arr[], int n){
    /**
     * @brief Approach 1: Brute Force
     * Time Complexity: O(n^2)
     * Space Complexity: O(n)
     */
    // int visited[n] = {0};
    // for(int i=0;i<n;i++){
    //     int  count = 1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j] && visited[j]!=1){
    //             count++;
    //             visited[j] = 1;
    //         }
    //     }
    //     if(visited[i]!=1)
    //         cout<<"Frequency of "<<arr[i]<<" is: "<<count<<endl;
    //     visited[i] = 1;
    // }

    /**
     * @brief Approach 2: Using Map
     * Time Complexity: O(n)
     * Space Complexity: O(n)
     * 
     */
    
    unordered_map<int, int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it : mp){
        cout<<"Frequency of "<<it.first<<" is: "<<it.second<<endl;
    }
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    countFrequency(arr, n);
    return 0;
}