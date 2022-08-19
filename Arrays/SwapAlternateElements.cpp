#include<bits/stdc++.h>
using namespace std;
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
void swapAlternate(int a[], int size){
    for(int i=0;i<size-1;i+=2){
        swap(a[i], a[i+1]);
    }
}
void display(int a[],int size){
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    /**
     * arr[] = {1, 2, 3, 4, 5}    output: {2, 1, 4, 3, 5}
     * arr[] = {1, 2, 3, 4, 5, 6} output: {2, 1, 4, 3, 6, 5}
     */
    swapAlternate(arr, n);
    display(arr, n);
    return 0;
}