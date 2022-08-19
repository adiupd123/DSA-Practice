#include<bits/stdc++.h>
using namespace std;
int fibonacci(int N){    
    if(N<=1)
        return N;
    return fibonacci(N-1)+fibonacci(N-2);
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int N;
    cin>>N;
    cout<<fibonacci(N)<<"\n";
    return 0;
}