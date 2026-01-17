#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
        int* arr;
        int size;
        int top;

        Stack(int capacity){
            arr = new int[capacity];
            size = capacity;
            top =-1;

            for(int i=0;i<size;i++){
                arr[i]=0;
            }
        }

        void push(int val){
            if(top==size-1){
                //stack is already full , agar insert karoge , toh stack overflow ho jayega
                cout<<"Stack Overflow"<<endl;
            }else{
                top++;
                arr[top]=val;
            }
        }

        void pop(){
            if(top==-1){
                //stack is empty cann't pop in this case ,coz there is no element to pop
                cout<<"Stack Underflow"<<endl;
            }else{
                arr[top]=0;
                top--;
            }
        }

        int getSize(){
            return top+1;
        }

        bool isEmpty(){
            if(top==-1){
                return true;
            }else{
                return false;
            }
        }

        int getTop(){
           if(top==-1){
            cout<<"there is no element on top coz is stack empty";
            return -1;
           }else{
            return arr[top];
           }
        }

        void print(){
            cout<<"Printing the stack"<<endl;
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
};

int main(){
    
    Stack s(5);
    s.print();
    s.push(10);
    s.print();
    s.push(20);
    s.print();
    s.push(30);
    s.print();
    s.push(40);
    s.print();
    s.push(50);
    s.print();
    // s.push(60);
    
    cout<< s.getTop()<<endl;
    cout<< s.getSize()<<endl;
    cout<< s.isEmpty()<<endl;

    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    cout<< s.getSize()<<endl;
    

    /*

    //creation
    stack<int>s;
    cout<<"Hiii";
    //insertion
    s.push(10);
    s.push(20);
    s.push(30);

    //size
    cout<<s.size()<<endl;
    //check empty or not
    cout<<s.empty()<<endl;
    //peek
    cout<<s.top()<<endl;
    //remove
    
    s.pop();
    cout << s.top() << endl;

    */



    return 0;
}