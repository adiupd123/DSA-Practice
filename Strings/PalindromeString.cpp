#include<bits/stdc++.h>
using namespace std;
char toLowerCase(char ch){
        if(ch>=65 && ch<=90)
            ch = ch + 'a' - 'A';
        return ch;
    }
bool isPalindrome(string s) {
    for(int i=0;i<s.length();i++){
        s[i] = toLowerCase((char)s[i]);
    }
    int i=0, j=s.length()-1;
    while(i<=j){
        if(((s[i]>=97 && s[i]<=122) ^ (s[i]>='0' && s[i]<='9')) && 
        ((s[j]>=97 && s[j]<=122) ^ (s[j]>='0' && s[j]<='9'))) {            
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        } else if((s[i]>=97 && s[i]<=122) ^ (s[i]>='0' && s[i]<='9')) {
            j--;
        } else if((s[j]>=97 && s[j]<=122) ^ (s[j]>='0' && s[j]<='9')){
            i++;
        } else {
            i++;
            j--;
        }
        
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    if(isPalindrome(s)){
        cout<<"It is a palindrome"<<endl;
    }
    else{
        cout<<"It is not a palindrome"<<endl;
    }
}