#include<bits/stdc++.h>
using namespace std;
void reverse(int *b, int n, int i){
    if(i>=n/2)
        return;
    int t = *(b+i);
    *(b+i) = *(b+n-i-1);
    *(b+n-i-1) = t;
    reverse(b, n, i+1);
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
    reverse(arr, n, 0);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}