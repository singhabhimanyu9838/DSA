#include<iostream>
#include<stack>
using namespace std;

void insertSort(stack<int>&s ,int val){
    if(s.empty()){
        s.push(val);
        return;
    }

    if(!s.empty() && s.top()<val){
        s.push(val);
        return;
    }
    int topE = s.top();
    s.pop();
    insertSort(s ,val);
    s.push(topE);

}

void print(stack<int>&s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(50);
    s.push(60);

    int val = 40;
    insertSort(s ,val);

    print(s);


    return 0;
}