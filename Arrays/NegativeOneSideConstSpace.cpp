#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void negOneSideConSpace(int arr[], int n){
    int left = 0;
    int right = n-1;
    while(left<=right){
        // -1 3 4 -2 100 -34 11 25
        if(arr[left]<0 && arr[right]<0)
            left++;
        else if(arr[left]>0 && arr[right]<0){
            int t = arr[left];
            arr[left] = arr[right];
            arr[right] = t;
            left++;
            right--;
        }
        else if(arr[left]>0 && arr[right]>0)
            right--;
        else{
            // Left element is negative and right element is positive
            left++;
            right--;
        }

        // if(arr[left]<0 && arr[right]<0){
        //     left++;
        // }
        // else if(arr[left]>0 && arr[right]<0){
        //     int t = arr[left];
        //     arr[left] = arr[right];
        //     arr[right] = t;
        //     left++;
        //     right--;
        // }
        // else if(arr[left]<0 && arr[right]>0){
        //     left++;
        //     right--;
        // }
        // else
        //     right--;
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
    negOneSideConSpace(arr, n);
    return 0;
}