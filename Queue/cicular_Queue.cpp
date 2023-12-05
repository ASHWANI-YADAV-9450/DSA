#include<iostream>
using namespace std;

class CirQueue{
    int size;
    int *arr;
    int front;
    int rear;

    CirQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    // push
    void push(int data) {
        // Queue Full
        // single element case -> first element
        // circular natur 
        // normal flow
        //TODO: add one more condition in the Queue full if block

        if((front == 0 && rear == size-1)) {
            cout <<"Q is full, cannot insert" << endl;
        } else if(front == -1) {
            front = rear =0;
            arr[rear] = data;
        } else if(rear == size-1 && front != 0) {
            rear =0;
            arr[rear] = data;
        } else {
            rear++;
            arr[rear] = data;
        }
    }

    // pop
    void pop(){
        // empty check
        // single element
        // circular nature
        // normal flow
        if(front ==-1) {
            cout << "Q is empty, cannot pop" << endl;
        }
         else if(front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
         } else if(front == size-1) {
            front =0;
         } else {
            front++;
         }
     }
};


int main() {

}