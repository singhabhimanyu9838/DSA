#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s , int value){
    //base case
    if(s.empty()){
        //insert At buttom
        s.push(value);
        return;
    }
    //1 case hum baaki sb recursion
    int up = s.top();
    s.pop();
    //baaki recursion
    insertAtBottom(s , value);
    //backtracking
    s.push(up);
    
}


int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(40);
    s.push(30);
    s.push(50);
    s.push(60);

    int value = 18;

    insertAtBottom(s, value);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}