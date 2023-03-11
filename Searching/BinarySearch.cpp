#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int n, int x){
    int beg = 0, end = n-1;
    while(beg<=end){
        int mid = (beg+end)/2;
        if(arr[mid]==x)
            return mid;
        else if(x<arr[mid])
            end = mid-1;
        else
            beg = mid+1;
    }
    return -1;
}
int binarySearchRec(vector<int> arr, int x, int beg, int end){
    int mid = (beg+end)/2;
    // Base Condition
    if(beg>end)
        return -1;
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]>x)
        return binarySearchRec(arr, x, 0, mid-1);
    else
        return binarySearchRec(arr, x, mid+1, end);
}
int main()
{
    int n, x;
    cin>>n>>x;
    vector<int> arr(n);
    for(auto& it:arr)
        cin>>it;
    cout<<binarySearchRec(arr, x, 0, n-1)<<endl;
    return 0;
}