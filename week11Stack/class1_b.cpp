#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
        int* arr;
        int size;
        int top1;
        int top2;

        Stack(int capacity){
            arr = new int[capacity];
            size = capacity;
            top1 =-1;
            top2 = size;

            for(int i=0;i<size;i++){
                arr[i]=0;
            }
        }

        void push1(int value){

            //if space available , then push
            //else stack overflow kr jaega
            if(top2 - top1 == 1){
                ////canot insert
                cout<<"Stack Overflow"<<endl;
            }else{
                top1++;
                arr[top1] = value;
            }
            
        }
        void push2(int value){
            //if space available , then push
            //else stack overflow kr jaega
            if(top2 - top1 == 1){
                ////canot insert
                cout<<"Stack Overflow"<<endl;
            }else{
                top2--;
                arr[top2] = value;
            }
            
        }
        void pop1(){
            //if element available then pop
            //if stack empty , then don't pop
            if(top1 == -1){
                //stack 1 is empty
                cout<<"Stack is Underflow"<<endl;
            }else{
                arr[top1]=0;
                top1--;
            }

        }
        void pop2(){

            //if element available then pop
            //if stack empty , then don't pop
            if(top2 == size){
                //stack 1 is empty
                cout<<"Stack is Underflow"<<endl;
            }else{
                arr[top2]=0;
                top2++;
            }
            
        }

        void print(){
            cout<<"Top1 "<<top1<<endl;
            cout<<"Top2 "<<top2<<endl;
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }


    };


int main(){

    //IMPLEMENTATION OF TWO STACK USING ARRAY
    // Stack s(5);
    // s.print();
    // s.push1(10);
    // s.print();
    // s.push2(20);
    // s.print();
    // s.push2(30);
    // s.print();
    // s.push1(10);
    // s.print();
    // s.push2(70);
    // s.print();
    // s.push1(90);
    // s.print();



    //IMPLEMENTING THE STRING IN REVERSE ORDER

    stack<char>st;
    string name = "Abhimanyu Singh";

    for(int i=0;i<name.length();i++){
        char ch = name[i];
        st.push(ch);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }




    return 0;
}