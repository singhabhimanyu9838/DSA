#include<iostream>
#include<queue>
using namespace std;
int main(){

    /*
    //creation 
    priority_queue<int> pq;
    //max-heap -> maximum value -> Highest priority

    pq.push(10);
    //10
    pq.push(30);
    //30 10
    pq.push(55);
    //55 30 10
    pq.push(24);
    //55 30 24 10

    //top element -> Highest priority element
    cout<< pq.top()<<endl;
    //55
    pq.pop();
    //highest priority element -> pop
    //i.e -> 55 ko pop krdia
    //30 24 10
   cout<< pq.top()<<endl;

   pq.pop();
   //24 10
   cout<< pq.top()<<endl;
   cout<< pq.size()<<endl;

   if(pq.empty()==true){
    cout<<"pq is emty"<<endl;
   }else{
    cout<<"pq is not empty"<<endl;
   }

   */

  /*min-heap -> Minimum Value -> Highest Priority*/
  priority_queue<int ,vector<int> , greater<int> > pq;
    pq.push(10);
    //10
    pq.push(30);
    //10 30
    pq.push(55);
    // 10 30 55
    pq.push(24);
    //10 24 30 55

    cout<<pq.top()<<endl;
    pq.pop();
    //24 30 55
    cout<<pq.top()<<endl;
  
  /*We can apply swap */


    return 0;
}