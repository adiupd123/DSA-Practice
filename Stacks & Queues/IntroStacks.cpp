#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack{
public:
    int st[MAX]; // Max size of stack   

    int top;

    Stack(){
        this->top = -1;
    }
    void push(int x){
        if(top>=MAX-1){
            cout<<"Stack Overflow"<<endl;
            return;
        } else{
            top++;
            st[top] = x;
        }
    }
    int pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return 0;
        } else{    
            int x = st[top--];
            st[top] = INT_MIN;
            return x;
        }
    }
    int peek(){
        if(top<0){
            cout<<"Stack is Empty"<<endl;
            return 0;
        } else{
            return st[top];
        }
    }
    bool isEmpty(){
        return top==-1;
    }

};
int main(){

    Stack st = Stack();
    st.push(10);
    st.push(5);
    st.push(11);
    cout<<st.peek()<<endl;
    st.push(25);
    st.push(48);
    st.push(79);
    st.pop();
    cout<<"Elements present in the stack:"<<endl;
    vector<int> v;
    while(!st.isEmpty()){
        // Displaying topmost element
        cout<<st.peek()<<endl;
        // Popping topmost element
        v.push_back(st.pop());
    }
    reverse(v.begin(), v.end());
    for(auto it: v){
        st.push(it);
    }
    cout<<st.peek()<<endl;
}