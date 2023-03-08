#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Queue {
    int *arr;
    int qFront;
    int qBack;
public:
    Queue() {
        // Implement the Constructor
        arr = new int[MAX];
        qFront = 0;
        qBack = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qFront == qBack){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(qBack==MAX){
            return;
        } else{
            arr[qBack] = data;
            qBack++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qFront==qBack){
            return -1;
        } else{
            int x = arr[qFront];
            arr[qFront] = -1;
            qFront++;
            return x;
        }
    }

    int front() {
        // Implement the front() function
        if(qFront == qBack)
            return -1;
        else{
            return arr[qFront];
        }
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(80);
    while(!q.isEmpty()){
        cout<<q.front()<<" ";
        q.dequeue();
    }
    return 0;
}