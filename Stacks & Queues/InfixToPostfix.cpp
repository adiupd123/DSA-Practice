#include<bits/stdc++.h>
using namespace std;

string infixToPostfix(string s){
    string ans;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]>='9')){
            ans += s[i];
        }
        else if(s[i] == '(')
            st.push(s[i]);
        else if(s[i] == ')'){
            while(st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else if(!st.empty() && prec(s[i])<=prec(st.top())){

        }
    }

}
int main(){
    string s = "a+b*(c^d-e)^(f+g*h)-i";
    cout<<infixToPostfix(s)<<endl;
    return 0;
}