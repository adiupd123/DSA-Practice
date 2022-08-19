#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int N;
    cin>>N;
    cout<<fact(N)<<"\n";
    return 0;
}