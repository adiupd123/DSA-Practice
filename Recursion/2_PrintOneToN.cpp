#include<bits/stdc++.h>
using namespace std;
// Try to solve problem without using global variables
// Time Complexity = O(N)
void display(int n, int i){
    if(i>n)
        return;
    cout<<i<<endl;
    i++;
    display(n, i);
}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int N;
    cin>>N;
    display(N, 1);
    return 0;
}