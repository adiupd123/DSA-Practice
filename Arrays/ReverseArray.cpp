#include<bits/stdc++.h>
using namespace std;
void reverse(int *a, int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        int t = *(a+i);
        *(a+i) = *(a+j);
        *(a+j) = t;
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
    cout<<"Original Array:\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    reverse(arr, n);
    cout<<"\nReversed Array:\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}