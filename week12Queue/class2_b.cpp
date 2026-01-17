#include<iostream>
#include<queue>
#include<stack>
using namespace std;


void reverseInKGroup(queue<int>&q  , int k, int count){
    
    if(count >=k){
        //toh main pkka reverse krunga

        stack<int>s;
        //fetch k element from queue , insert in stack
        for(int i =0;i<k;i++){
            int ele = q.front();
            q.pop();
            s.push(ele);
        }

        //fetch from stack and push in queue

        for(int i=0;i<k;i++){
            int ele = s.top();
            s.pop();
            q.push(ele);
        }

        //1. case maine solve krlia h
        //baaki recursion sambhal lega
        reverseInKGroup(q, k ,count-k);

    }else{
        //size < k
        //iska mtlb as it is queue k front se
        //uthakar queue k end me in element ko insert krna h

        for(int i=0;i<count;i++){
            int ele = q.front();
            q.pop();
            q.push(ele);
        }
    }
}

int main(){
    //REVERSE K element in the group

    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.push(110);

    int k =3;
    int count = q.size();
    reverseInKGroup(q,k ,count);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


    return 0;
}