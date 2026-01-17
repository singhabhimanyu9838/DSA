#include<iostream>
#include<queue>
using namespace std;

int main(){

    //min-heap
    priority_queue<int,vector<int>,greater<int>>pq;
    
    pq.push(100);
    pq.push(10);
    pq.push(20);
    pq.push(15);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;



    //creation 
    //max-heap
    // priority_queue<int>pq;
    // //insertion
    // pq.push(10);
    // pq.push(100);
    // pq.push(20);
    // pq.push(15);

    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;
    // pq.pop();

    // cout<<pq.size()<<endl;




    return 0;
}