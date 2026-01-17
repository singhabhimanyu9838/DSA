#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int>st;
    while(!q.empty()){
        int ele = q.front();
        q.pop();
        st.push(ele);
    }

    //ab tk saare queue k element stack k ander push ho gaye honge 

    //ab stack se element jab bahar nikalengr to reverese ho gaya hoga

    while(!st.empty()){
        int ele = st.top();
        st.pop();
        q.push(ele);
    }
}

void reverseQueueRec(queue<int>&q){
    //base case 
    if(q.empty()){
        return ;
    }
    //1. case main solve krunga
    int frontElement = q.front();
    q.pop();
    //backi recursion ki h
    reverseQueueRec(q);
    q.push(frontElement);
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // reverseQueue(q);
    reverseQueueRec(q);

    //print all element inside queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    

    return 0;
}