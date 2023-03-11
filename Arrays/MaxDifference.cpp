#include<bits/stdc++.h>
using namespace std;
int findMaxDifference(int arr[], int n){
    
    /**
     * @brief Approach 1: Naive Approach
     *  Time Complexity: O(n*n)
     *  Space Complexity: O(1)
     */
    
    // int curDiff = INT_MIN, maxDiff = INT_MIN;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         curDiff = arr[j] - arr[i];
    //         if(curDiff>maxDiff)
    //             maxDiff = curDiff;
    //     }
    // }
    // return maxDiff;
    
    /**
     * @brief Approach 2: Optimised Approach
     *  Time Complexity: O(n)
     *  Space Complexity: O(1)
     */
    
    int maxDiff = arr[1] - arr[0], minVal = arr[0];
    for(int j=1;j<n;j++){
        maxDiff = max(maxDiff, arr[j] - minVal);
        minVal = min(minVal, arr[j]);
    }
    return maxDiff;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<findMaxDifference(arr, n)<<endl;
    cout<<endl;
    return 0;
}