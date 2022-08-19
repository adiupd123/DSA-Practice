#include<bits/stdc++.h>
using namespace std;
int insertElement(int arr[], int n, int capacity, int x, int pos){
    if(n>=capacity)
        return n;
    for(int i=n;i>pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = x;
    return n + 1;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int c = n+1;
    int arr[c];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int pos = n/2;
    if(insertElement(arr, n, c, x, pos)==n+1)
        cout<<"Insertion Successful\n";
    else
        cout<<"Insertion Unsuccessful\n";
    return 0;
}