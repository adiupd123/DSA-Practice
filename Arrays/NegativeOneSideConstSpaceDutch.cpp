#include<bits/stdc++.h>
using namespace std;
void negOneSideConSpaceDutch(int arr[], int n){
    int lo = 0, hi = n-1;
    while(lo<hi){
        if(arr[lo]<0)
            lo++;
        else if(arr[hi]>0)
            hi--;
        else{
            int t = arr[lo];
            arr[lo] = arr[hi];
            arr[hi] = t;
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
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
    negOneSideConSpaceDutch(arr, n);
    return 0;
}