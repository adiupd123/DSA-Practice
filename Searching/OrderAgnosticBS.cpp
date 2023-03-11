#include<bits/stdc++.h>
using namespace std;
int binarySearchOA(vector<int> arr, int target){
    int beg = 0, end = arr.size() - 1;
    bool isAsc = arr[beg] <= arr[end];
    while(beg<=end){
        int mid = (beg + end)/2;
        if(arr[mid] == target)
            return mid;
        if(isAsc){
            if(arr[mid] > target)
                end = mid - 1;
            else
                beg = mid + 1;
        } else{
            if(arr[mid] > target)
                beg = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, x;
    cin>>n>>x;
    vector<int> arr(n);
    for(auto& it:arr)
        cin>>it;
    cout<<binarySearchOA(arr, x)<<endl;
    return 0;
}