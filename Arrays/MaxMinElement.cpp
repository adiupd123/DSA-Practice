#include<bits/stdc++.h>
using namespace std;
int maxElement(int arr[], int N){
    int max = arr[0];
    for(int i=1;i<N;i++)
        if(max<arr[i])
            max = arr[i];
    return max;
}

int minElement(int arr[], int N){
    int min = arr[0];
    for(int i=1;i<N;i++)
        if(min>arr[i])
            min = arr[i];
    return min;
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
    cout<<"Maximum Element in this Array: "<<maxElement(arr, n)<<endl;
    cout<<"Minimum Element in this Array: "<<minElement(arr, n)<<endl;
    return 0;
}