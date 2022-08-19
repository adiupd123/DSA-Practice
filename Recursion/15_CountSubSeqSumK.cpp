#include<bits/stdc++.h>
using namespace std;
int countSubSeq(int ind, vector<int> arr, int sum, int K){
    if(ind>=arr.size()){
        if(sum==K)
            return 1;
        return 0;
    }
    int l = countSubSeq(ind+1, arr, sum+arr[ind], K);
    int r = countSubSeq(ind+1, arr, sum, K);
    return l+r;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto& it:arr)
        cin>>it;
    cout<<countSubSeq(0, arr, 0,  k)<<"\n";
    return 0;
}
