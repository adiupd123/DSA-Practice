#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int target, int start, int end){
    while(start<=end){
        int mid = (start + end)/2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            start = mid + 1;
        else 
            end = mid - 1;
    }
    return -1;
}

int ans(int arr[], int target){
    int start = 0, end = 0;

    // Shifting the search block and doubling its size until we get a block where target lies
    while(target > arr[end]){
        int newStart = end + 1;
        end = end + (end - start + 1) * 2;
        start = newStart; 
    }
    // Performing Binary Search on the found block
    return binarySearch(arr, target, start, end);
}


int main(){
    int arr[] = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
    int x = 10;
    cout<<"Result of Binary Search: "<<ans(arr, x)<<endl;
    return 0;
}