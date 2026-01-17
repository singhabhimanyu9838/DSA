#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;

    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(52);
    arr.push_back(37);
    arr.push_back(98);

    /*O(n)*/
    make_heap(arr.begin( ),arr.end());

    // for(int a : arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

//insertion 

    arr.push_back(101);
    /*O(logn)*/
    push_heap(arr.begin(),arr.end());
    for(int a : arr){
        cout<<a<<" ";
    }
     cout<<endl;

    //deletion
    /*O(1)*/
    pop_heap(arr.begin(),arr.end());
     arr.pop_back();
    for(int a : arr){
        cout<<a<<" ";
    }

    cout<<endl;
    /*O(n)*/
    sort_heap(arr.begin(),arr.end());
      for(int a : arr){
        cout<<a<<" ";
    }
   






    return 0;
}