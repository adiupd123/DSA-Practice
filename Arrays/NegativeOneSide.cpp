#include<bits/stdc++.h>
using namespace std;
void negativeOneSide(int  arr[], int n){
    int neg[n], pos[n];
    int i, j, k;
    for(i=0, j=0, k=0;i<n;i++){
        if(arr[i]<0)
            neg[j++] = arr[i];
        else
            pos[k++] = arr[i];
    }
    int p = j;
    int q = k;
    for(i=0;i<n;i++){
        if(i<p)
            arr[i] = neg[i];
        else
            arr[i] = pos[i-p];
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    // int i, j;
    // while(i<n){
    //     if(arr[j]<0){
    //         swap(arr[j++],arr[i++]);
    //     }
    //     else{
    //         j++;
    //     }
    // }
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
    // -1 4 10 -2 22 -3 -10 12 5 6
    negativeOneSide(arr, n);
    return 0;
}