#include<bits/stdc++.h>
using namespace std;
void display(int i, int N){
    if(i>N)
        return;
    display(i+1, N);
    cout<<i<<"\n";
}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int N;
    cin>>N;
    display(1, N);
    return 0;
}