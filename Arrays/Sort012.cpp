#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void sort012(int arr[], int n){
    int ptr1 = 0, ptr2 = n-1, it = 0;
    while(it<=ptr2){
        if(arr[it]==0){
            swap(&arr[it++],&arr[ptr1++]);
        }
        else if(arr[it]==2){
            swap(&arr[it],&arr[ptr2--]);
        }
        else if(arr[it]==1){
            it++;
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int arr[] = {0, 2, 0, 1, 0, 2, 1, 2, 2, 1};
    // 0 0 0 1 1 1 2 2 2 2
    int n = 10;
    sort012(arr, n);
    return 0;
}