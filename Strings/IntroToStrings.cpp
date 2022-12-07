#include<bits/stdc++.h>
using namespace std;
int main(){
    char a = 'A';
    char b = 'B';
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<char> v(10, 'A');
    for(auto it: arr){
        cout<<it<<endl;
    }
    for(auto it: v){
        cout<<it<<endl;
    }
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}