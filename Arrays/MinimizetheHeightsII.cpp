#include<bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[], int n, int k) {
    sort(arr, arr+n);
    int i = 0, j = n-1;
    int minE = arr[0], maxE = arr[n-1];
    int curDiff = maxE - minE, minDiff = curDiff;
    
    return minDiff;
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
    int K;
    cin>>K;
    cout<<getMinDiff(arr, n, K)<<endl;
    return 0;
}