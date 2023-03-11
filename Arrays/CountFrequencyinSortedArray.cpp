#include<bits/stdc++.h>
using namespace std;

void countFrequency(int arr[], int n){
    int count = 0;
    vector<vector<int>> freq;
    for(int i=0;i<n;i++){
        count++;
        if(arr[i]!=arr[i+1] && i<n-1){
            freq.push_back({arr[i], count});
            if(i==n-2)
                freq.push_back({arr[i+1], 1});
            count = 0;
        }
        else if(i==n-1 && arr[i]==arr[i-1]){
            freq.push_back({arr[i], count});
            count = 0;
        }
    }
    for(int i=0;i<freq.size();i++)
        cout<<"Frequency of "<<freq[i][0]<<" is: "<<freq[i][1]<<endl;
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
    countFrequency(arr, n);
    return 0;
}