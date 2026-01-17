#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
using namespace std;

int main(){

    /*Iterator basics*/

    // vector<int>arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);
    
    // //traversal
    // vector<int> :: iterator it = arr.begin();
    // while(it != arr.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }

    /*Farword Iterator*/

    // forward_list<int>list;
    // list.push_front(10);
    // list.push_front(30);
    // list.push_front(50);

    // forward_list<int> :: iterator it = list.begin();

    // while(it !=list.end()){
    //     // cout<< *it << " ";
    //     *it = (*it) +5;
    //     it++;
    // }
    // it = list.begin();
    // while(it != list.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }



    /*Bi-directional Iterator*/
    list<int> mylist;
    mylist.push_back(50);
    mylist.push_back(60);
    mylist.push_back(70);

    // list<int>::iterator it = mylist.begin();
    // while(it != mylist.end()){
    //     //writing
    //     (*it)=(*it) + 2;
    //     //read
    //     cout<<(*it)<<" ";
    //     //forword
    //     it++;
    // }

    //Let trying moving backward in mylist

    // list<int>::iterator it = mylist.end();

    // while(it!=mylist.begin()){
    //     //backward
    //     it--;
    //     cout<<*it<<" ";
    // }

    /*Random Access Iterator*/

    vector<int> arr = {10,20,30,40,50};
    // vector<int>::iterator it = arr.begin();
    // while(it!=arr.end()){
    //     //write
    //     *it = *it +7;
    //     //read
    //     cout<<*it<<" ";
    //     //forward
    //     it++;
    // }


    //let try backward movement in vector iterator
    // vector<int>::iterator it = arr.end();
    // while(it!=arr.begin()){
    //     //pahle piche jaunga 
    //     it--;
    //     //print
    //     cout<<*it<<" ";
    // }

    //Random access the iterator

    vector<int>::iterator it = arr.begin()+3;
    cout<<*it<<" ";








    return 0;
}