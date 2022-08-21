#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int n){
    int lastUniquePos = 0, i;
    for(i=1;i<n;i++){
        if(arr[i]!=arr[lastUniquePos]){
            lastUniquePos++;
            arr[lastUniquePos] = arr[i];
        }
    }
    return lastUniquePos + 1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sizeOfUniqueArr = removeDuplicates(arr, n);
    cout<<"No. of Unique elements: "<<sizeOfUniqueArr<<endl;
    cout<<"Unique Elements of Array:\n";
    for(int i=0;i<sizeOfUniqueArr;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}