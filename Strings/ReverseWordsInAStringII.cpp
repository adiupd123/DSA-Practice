#include<bits/stdc++.h>
using namespace std;

string reverse(string word){
    for(int i=0, j=word.size()-1;i<=j;i++, j--){
        swap(word[i], word[j]);
    }
    return word;
}
void reverseWords(vector<char> v){
    string word;
    for(int i=0;i<v.size();i++){
        if(v[i] != ' ')
            word.push_back(v[i]);
        else{
            word = reverse(word);
            for(int j = i - (word.size()-1), k=0 ;k<word.size(); j++, k++)
                v[j] = word[k];
        }
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
// the sky is blue
int main(){
    vector<char> s = { 't', 'h', 'e', ' ', };
    reverseWords(s);
    return 0;
}