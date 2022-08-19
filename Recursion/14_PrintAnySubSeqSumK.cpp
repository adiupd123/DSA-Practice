#include<bits/stdc++.h>
using namespace std;
void printSubSeq(int ind, vector<int> &a, vector<int> arr, int sum, int K){
    if(ind>=arr.size()){
        if(sum==K){
            if(sum){
                for(auto it : a)
                    cout<<it<<" ";
            }
            else
                cout<<"{}";
            cout<<"\n";    
        }
        return;
    }
    a.push_back(arr[ind]);
    printSubSeq(ind+1, a, arr, sum+arr[ind], K);
    a.pop_back();
    printSubSeq(ind+1, a, arr, sum, K);
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n, k;
    cin>>n>>k;
    vector<int> arr(n), a;
    for(auto& it:arr)
        cin>>it;
    printSubSeq(0, a, arr, 0,  k);
    return 0;
}