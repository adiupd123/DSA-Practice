#include<bits/stdc++.h>
using namespace std;
void sort01(vector<int> &arr){
    int zeroPtr = 0, onePtr = arr.size()-1;
    while(zeroPtr<=onePtr){
        if(arr[zeroPtr]==0 && arr[onePtr]==1){
            zeroPtr++;
            onePtr--;
        }
        else if(arr[zeroPtr]==1 && arr[onePtr]==0){
            swap(arr[zeroPtr], arr[onePtr]);
            zeroPtr++;
            onePtr--;
        }
        else if(arr[zeroPtr]==0 && arr[onePtr]==0)
            zeroPtr++;
        else
            onePtr--;
    }
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    vector<int> v;
    int n;
    cin>>n;
    for(auto &it:v)
        cin>>it;
    sort01(v);
    for(auto it:v)
        cout<<it<<" ";
    cout<<endl;
    return 0;
}