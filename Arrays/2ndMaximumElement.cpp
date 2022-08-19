#include<bits/stdc++.h>
using namespace std;
int secondMaxElement(int arr[], int n){
    int largest = INT_MIN, second_largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>second_largest){
            if(arr[i]>largest){
                second_largest = largest;
                largest = arr[i];
            }
            else{
                second_largest = arr[i];
            }
        }
    }
    return second_largest;
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
    cout<<"2nd maximum element in this Array: "<<secondMaxElement(arr, n);
    return 0;
}