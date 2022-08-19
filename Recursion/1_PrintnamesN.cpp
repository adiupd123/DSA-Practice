#include<bits/stdc++.h>
using namespace std;
// Try to solve problem without using global variables
// Time Complexity = O(N)
void display(int n){
    if(n==0)
        return;
    cout<<"Aditya\n";
    n--;
    display(n);
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int N;
    cin>>N;
    display(N);
    return 0;
}