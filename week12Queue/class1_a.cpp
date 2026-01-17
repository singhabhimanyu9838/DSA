#include<iostream>
#include<queue>
using namespace std;

class Queue{
    private:
    int *arr;
    int n;
    int front;
    int rear;
   public:
    Queue(int size){
        arr = new int[size];
        n = size;
        front = -1;
        rear =-1;

    }
    void push(int val){
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
    void pop(){
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
    int getFront(){
        if(front == -1){
            cout<<"queue is empty"<<endl;
        }else{
            return arr[front];
        }
    }
    int getRear(){
        if(rear == -1){
            cout<<"queue is empty"<<endl;
        }else{
            return arr[rear];
        }
    }
    int getSize(){
        
        // number of element inside queue
        if(front ==-1 && rear ==-1){
            return 0;
        }else{
            return rear - front +1;
        }
        
    }
    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }else{
            return false;
        }
    }
    void print(int size){
        for(int i =0;i<size;i++){
            
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};


int main(){

    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.print(q.getSize());
    cout<<q.getSize()<<endl;
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    q.push(30);
    q.push(40);
    q.print(q.getSize());  


    cout<<q.getSize()<<endl;

    /*
    // single queue
    queue<int>q;
    //insertion 
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    //front
    cout<<q.front()<<endl;
    //pop
    q.pop();
    cout<<q.front()<<endl;
    //size
    cout<<q.size()<<endl;
    //empty
    cout<<q.empty()<<endl;
    //rear element
    cout<<q.back()<<endl;
    //printing
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    */

    /*
    //doubly-ended queue
    deque<int>dq;
    //insertion
    dq.push_front(10);
    //10
    dq.push_front(20);
    //10 20
    dq.push_front(30);
    //10 20 30
    dq.push_back(80);
    //80 10 20 30
    dq.push_back(110);
    //110 80 10 20 30
    cout<<dq.size()<<endl;
    //empty
    cout<<dq.empty()<<endl;

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    dq.pop_back();
    cout<<dq.back()<<endl;
    */

    return 0;
}