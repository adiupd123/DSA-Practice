#include<bits/stdc++.h>
using namespace std;

void moveZerosToEnd(int arr[], int n){
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0){
    //         for(int j=i+1;j<n;j++){
    //             if(arr[j]!=0){
    //                 swap(arr[i], arr[j]);
    //                 break;
    //             }
    //         }
    //     }
    // }
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
}
// 1 2 4 0 7 0 0 3 5 0
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    moveZerosToEnd(arr, n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}