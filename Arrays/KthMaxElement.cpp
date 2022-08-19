#include<bits/stdc++.h>
using namespace std;
int kMaxElement(int arr[], int N, int K){
    // 5 10 3 0 15 6
    sort(arr, arr+N, greater<int>());
    return arr[K-1];
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
    int k;
    cin>>k;
    cout<<"k = "<<k<<" maximum element in this Array: "<<kMaxElement(arr, n, k);
    return 0;
}