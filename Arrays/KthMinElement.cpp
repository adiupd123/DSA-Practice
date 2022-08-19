#include<bits/stdc++.h>
using namespace std;
int kMinElement(int A[], int N, int K){
    sort(A,A+N);
    return A[K-1];
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
    cout<<"k = "<<k<<" minimum element in this Array: "<<kMinElement(arr, n, k);
    return 0;
}