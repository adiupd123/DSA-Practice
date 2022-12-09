#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Queue{
    int *arr;
    int front, back;
    int size;
    unsigned int capacity;

    public:
    Queue(){
        arr = new int[MAX];
        front = -1;
        back = -1;
        size = 0;
        capacity = MAX;
    }
    
};

int main(){
    Queue q;
    return 0;
}