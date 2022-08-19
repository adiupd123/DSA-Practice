#include<bits/stdc++.h>
using namespace std;
int sort01(vector<int> &arr){
    int zeroPtr = 0, onePtr = arr.size()-1;
    int time = 0;
    while(zeroPtr<onePtr){
        if(arr[zeroPtr]==0){
            zeroPtr++;
        }
        if(arr[onePtr]==1)
            onePtr--;    
        if(arr[zeroPtr]==1 && arr[onePtr]==0 && zeroPtr<onePtr){
            swap(arr[zeroPtr], arr[onePtr]);
            zeroPtr++;
            onePtr--;
        }
        time++;
    }
    return time;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &it:v)
        cin>>it;
    int time = sort01(v);
    for(auto it:v)
        cout<<it<<" ";
    cout<<endl<<time<<endl;
    return 0;
}