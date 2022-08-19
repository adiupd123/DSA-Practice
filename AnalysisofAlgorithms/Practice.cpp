#include<bits/stdc++.h>
using namespace std;
itn fib(int N){
    int a = 0, b = 1, c;
    if(N==0 || N==1)
        c = N;
    for(int i=2;i<=N;i++){
        c = a + b;
        a = b;
        b = c; 
    }
    return c;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}