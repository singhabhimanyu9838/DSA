#include<iostream>
#include<queue>
using namespace std;

class Deque{
    private:
        int * arr;
        int n;
        int front;
        int rear;
    public:
        Deque(int size){
          this->n = size;
          arr = new int[size]();
          front = -1;
          rear =-1;  
        }

        void pushBack(int val){
            if(rear == n-1){
             cout<<"Overflow"<<endl;
            }else if(front == -1 && rear == -1){
             //inserting first element
             rear++;
             front++;
             arr[rear] = val;
            }else{
             //normal flow
             rear++;
             arr[rear] = val;
            }
        }
        void pushFront(int val){
            if(front == 0){
                //iska mtlb pere paas left side me koi aur jagah nhi hai
                cout<<"OverFlow"<<endl;
            }else if(front == -1 && rear == -1){
                //queue pehle empty thi , and ab main first element insert krne aa hu
                front++;
                rear++;
                arr[front] = val;
            }else{
                //normal flow
                front--;
                arr[front] = val;
            }

        }
        void popFront(){
            if(front ==-1 && rear == -1){
             //queue is empty
             cout<<"Underflow"<<endl;
            }else if(front == rear){
             //single element
             arr[rear] = -1;
             front =-1;
             rear =-1;
            }else{
             //normal flow
             arr[front] = -1;
             front++;
            }
        }
        void popBack(){
            if(front == -1 && rear ==-1){
                //underflow
                cout<<"underFlow"<<endl;
            }else if(front == rear){
                //iss case me queue k ander sirf 1 hi element bache hai h
                //there after removint it , queue will get empty
                arr[rear] = -1;
                front =-1;
                rear =-1;

            }else{
                arr[rear] =-1;
                rear--;
            }
        }
        void print(){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
};


int main(){
    Deque dq(5);

    dq.pushFront(10);
    dq.print();
    dq.pushFront(20);
    dq.print();
    dq.pushBack(50);
    dq.print();
    dq.pushFront(30);
    dq.print();
    dq.pushBack(60);
    dq.print();
    dq.popFront();
    dq.print();
    dq.popFront();
    dq.print();
    dq.popFront();
    dq.print();
    // dq.popBack();
    // dq.print();
    // dq.popBack();
    // dq.print();
    // dq.popBack();
    // dq.print();
    // dq.popBack();




    return 0;
}