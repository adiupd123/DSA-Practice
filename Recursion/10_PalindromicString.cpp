#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool isPalindrome(string S, int i){
    int n = S.length();
    if(i>=n/2)
        return true;
    if(S[i]==S[n-i-1])
        return isPalindrome(S, i+1);
    return false;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    if(isPalindrome(s, 0))
        cout<<s<<" is Palindrome\n";
    else
        cout<<s<<" is not a Palindrome\n";    
    return 0;
}