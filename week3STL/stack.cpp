#include<iostream>
#include<stack>
using namespace std;

int main(){
   
    //creation
    stack<int> st;
    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<endl;
    //10,20,30
    st.pop();
    //10,20
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    //10
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;

    if(st.empty()==true){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"not empty"<<endl;
    }
    /*We can also used swap in stack as we do in the list and queue*/
    /*not present iterator*/

    return 0;
}