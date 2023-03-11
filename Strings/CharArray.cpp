#include<bits/stdc++.h>
using namespace std;
void reverse(char *ch, int n){
    for(int i=0, j=n-1;i<j;i++, j--){
        int temp = *(ch+i);
        *(ch+i) = *(ch+j);
        *(ch+j) = temp;
    }
    for(int i=0;i<n;i++){
        cout<<*(ch+i);
    }
    cout<<endl;
}
int main(){
    char a = 'A';
    char b = 'B';
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char ch[] = {'a', 'b', 'c', 'd', 'e'};
    vector<char> v1(10, 'A');
    vector<char> v2(10);
    vector<char> v3 = {'x', 'y', 'z'};
    
    char name[10];
    cin>>name;
    cout<<name<<endl;
    
    int count = 0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    cout<<"Length of: "<<name<<" is: "<<count<<endl;
    
    reverse(name, count);
    
    cout<<ch<<endl;
    for(auto it: arr){
        cout<<it<<endl;
    }
    for(auto it: v1){
        cout<<it<<endl;
    }
    for(auto it: v2){
        cout<<it<<endl;
    }
    for(auto it :v3){
        cout<<it<<endl;
    }
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}