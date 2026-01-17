#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    //10 -> 20 -> 30
    first.insert(first.begin(),1100);
    //1100 -> 10 -> 20 -> 30
    //  list<int>::iterator ti2 = first.begin();
    // while(ti2 != first.end()){
    //     cout<< *ti2<<" ";
    //     ti2++;
    // }
    
    cout<<first.size()<<endl;
    first.erase(first.begin(),first.end());
    cout<<first.size()<<endl;

/* 
    list<int>second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    //100 -> 200-> 300
     list<int>::iterator ti1 = first.begin();
    while(ti1 != first.end()){
        cout<< *ti1<<" ";
        ti1++;
    }
    cout<<endl;

    first.swap(second);

    list<int>::iterator ti = first.begin();
    while(ti != first.end()){
        cout<< *ti<<" ";
        ti++;
    }
    */


  /* list<int> myList;

    //insertion 
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    //10 -> 20 -> 30 -> 40
    myList.push_front(100);
    //100 -> 10 -> 20 -> 30 -> 40

    myList.pop_back();
    //100 -> 10 -> 20 -> 30
    myList.pop_front();
    // 10 -> 20 -> 30
    myList.push_back(10);
    // 10 -> 20 -> 30 -> 10

    // cout<<myList.front() <<endl;
    // cout<<myList.back() <<endl;

    cout<<"before removing"<<endl;
    list<int>::iterator it = myList.begin();

    while(it != myList.end()){
        cout<< *it << " ";
        it++;
    }

    myList.remove(10);

    cout<<"After removing"<<endl;
    list<int>::iterator it1 = myList.begin();

    while(it1 != myList.end()){
        cout<< *it1 << " ";
        it1++;
    }
*/ 


    // cout<<myList.size()<<endl;
    // myList.clear();
    // cout<<myList.size()<<endl;;
    // if(myList.empty()==true){
    //     cout<<"List is empty"<<endl;
    // }else{
    //     cout<<"List is not empty"<<endl;
    // }



   


    return 0;
}