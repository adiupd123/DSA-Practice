#include<bits/stdc++.h>
using namespace std;
int secondMinElement(int arr[], int n){
    int smallest = INT_MAX, second_smallest = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<second_smallest){
            if(arr[i]<smallest){
                second_smallest = smallest;
                smallest = arr[i];
            }
            else{
                second_smallest = arr[i];
            }
        }
    }
    return second_smallest;
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
    cout<<"2nd minimum element in this Array: "<<secondMinElement(arr, n);
    return 0;
}