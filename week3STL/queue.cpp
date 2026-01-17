#include<iostream>
#include<queue>
using namespace std;

int main(){

    /*
    //creation 
    queue<int> q;


    //insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    //10,20,30,40
    cout<<q.size()<<endl;

    // not available in queue = q.clear();

    q.pop();
    //20,30,40
    cout<<q.size()<<endl;
    cout<<"front -> "<<q.front()<<endl;
    cout<<"back -> "<<q.back()<<endl;


    if(q.empty()==true){
        cout<<"q is empty";
    }else{
        cout<<"not empty";
    }
    */

    queue<int> first;

    //insertion
    first.push(10);
    first.push(20);
    first.push(30);
    first.push(40);
    //10,20,30,40

    queue<int> second;

    //insertion
    second.push(110);
    second.push(120);
    second.push(130);
    second.push(140);
    //110,120,130,140

    first.swap(second);
    cout<<first.front() <<" "<<first.back()<<endl;
     /*not present iterator*/



    return 0;
}