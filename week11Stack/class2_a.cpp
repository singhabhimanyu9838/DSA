#include<iostream>
#include<stack>
using namespace std;



void getMiddle(stack<int>&s  , int count){
    if(count == 0){
        cout<< s.top();
    }
    int ele = s.top();
    s.pop(); 
    count--;
    getMiddle(s ,count);
    s.push(ele);
}

int main(){
    stack<int>s;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    int middle = s.size()/2;
    getMiddle(s , middle );



    return 0;
}