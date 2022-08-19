#include<bits/stdc++.h>
using namespace std;
void reverse(int *b, int l, int r){
    if(l>=r)
        return;
    int temp = *(b+l);
    *(b+l) = *(b+r);
    *(b+r) = temp;
    reverse(b, l+1, r-1);
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int a[]={1, 2, 3, 4, 5};
    reverse(a, 0, 4);
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    return 0;
}