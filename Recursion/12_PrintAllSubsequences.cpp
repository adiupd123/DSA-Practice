#include<bits/stdc++.h>
using namespace std;
int subNo = 1;
void printSubseq(int ind, vector<int> &a, vector<int> arr){
    if(ind>=arr.size()){
        cout<<subNo++<<" : ";
        for(int i=0;i<a.size();i++)
            cout<<a[i]<<" ";
        if(a.size()==0)
            cout<<"{}";
        cout<<"\n";
        return;
    }
    a.push_back(arr[ind]);
    printSubseq(ind+1, a, arr);
    a.pop_back();
    printSubseq(ind+1, a, arr);
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> arr(n), a;
    for(auto &it:arr)
        cin>>it;
    printSubseq(0, a,arr);
    return 0;
}