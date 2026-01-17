#include<iostream>
#include<stack>
using namespace std;

bool checkSort(stack<int>&s){
    int prev = 10000;
    while(!s.empty()){
        if(prev > s.top()){
            prev = s.top();
            s.pop();
        }else{
            return false;
        }
    }
    return true;

}


int main(){
    stack<int>s;
    s.push(20);
    s.push(30);
    s.push(90);
    s.push(50);
    s.push(60);
    
    cout<<checkSort(s);



    return 0;
}