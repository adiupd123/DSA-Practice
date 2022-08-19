#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int N, int e){
    for(int i=0;i<N;i++){
        if(arr[i]==e)
            return i;
    }
    return -1;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<"Index of "<<x<<" in the array:"<<search(arr,n,x);
    return 0;
}