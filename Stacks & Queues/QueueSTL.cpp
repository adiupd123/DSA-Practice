#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q, p;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(10);
    while(!q.empty()){
        cout<<q.front()<<" ";
        p.push(q.front());
        q.pop();
    }
    cout<<endl;
    while(!p.empty()){
        cout<<p.front()<<" ";
        q.push(p.front());
        p.pop();
    }
    return 0;
}