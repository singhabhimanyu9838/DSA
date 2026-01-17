#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    // set <int> st;
    unordered_set<int> st;
    st.insert(10);
    st.insert(20);
    st.insert(8);
    st.insert(4);

    // st.erase(st.begin(),st.end());
    // cout<<st.size()<<endl;

    // if(st.find(10)!=st.end()){
    //     cout<<"found"<<endl;
    // }else{
    //     cout<<"not found"<<endl;
    // }

    if(st.count(20)==1){

        cout<<"found"<<endl;
    }
    if(st.count(2)==0){

        cout<<"not found"<<endl;
    }





    // cout<<st.size()<<endl;
    // st.clear();
    // cout<<st.size()<<endl;

    /*
    //traverse
    // set<int>:: iterator it = st.begin();
    unordered_set<int>:: iterator it = st.begin();
    while(it != st.end()){
        cout<<*it <<" ";
        it++;
    }
    */
//    if(st.empty()==true){
//     cout<<"empty"<<endl;
//    }else cout<<"not empty"<<endl;




    return 0;
}