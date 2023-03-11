#include<bits/stdc++.h>
using namespace std;
int findMaxProfit(int arr[], int n){
    int curProfit = 0, totalProfit = 0, buyPos = 0, sellPos = 0;
    int i=0;
    while(i<n){
        curProfit = 0;
        if(arr[i]<arr[i+1]){
            buyPos = i;
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i]){
                    sellPos = j;
                    if(arr[j]>arr[j+1] ^ j==n-1){
                        curProfit = max(curProfit,arr[sellPos] - arr[buyPos]);
                        totalProfit += curProfit;
                        break;
                    }
                }
            }
            i = sellPos+1;
        }
    }
    return totalProfit;
}
// 1 5 3 1 2 8 
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
    int maxProfit = findMaxProfit(arr, n);
    cout<<maxProfit<<endl;
    return 0;
}