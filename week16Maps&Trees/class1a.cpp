#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){

    //creation
    unordered_map<int,string>uMap;
    map<int , string>oMap;

    //insertion
    uMap[2] = "Scorpio";
    uMap[3] = "Fortuner";
    uMap[1] = "baleno";

    oMap[2] = "Scorpio";
    oMap[3] = "Fortuner";
    oMap[1] = "baleno";

    cout<<"Print ordered Mao: "<<endl;
    for(auto i : oMap){
        cout<<i.first<< "->"<<i.second<<endl;
    }

    cout<<"Print unordered Mao: "<<endl;
    for(auto i : uMap){
        cout<<i.first<< "->"<<i.second<<endl;
    }

    //search or find
    //count() and find()
    if(uMap.find(1) == uMap.end()){ //return iterator
        cout<<"1 nhi mila"<<endl;
    }else{
        cout<<"1 mil gya"<<endl;
    }

    if(uMap.count(3) == 0){ //return integer
        cout<<"3 nhi mila"<<endl;
    }else{
        cout<<"3 mil gya"<<endl;
    }


    return 0;
}