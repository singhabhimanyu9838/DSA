#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

    unordered_map<int,int>table;//roll no. ,desk no.

    //insertion
    table[1]=53;
    table[2]=54;
    table[3]=55;
    table[2]=57;//re-assign , because key = 2 was already exist

    
    //iterate
    //I have to iterate over 3 entries
    unordered_map<int,int>::iterator it;
   /*

    for(it = table.begin();it != table.end();it++){
        int key = it -> first;
        int value = it -> second;
        cout<<"key: "<<key <<" "<< "Value: "<<value <<endl;
    }

    */
    //another Syntax
    //for each
    for(auto it:table){
        int key = it.first;
        int value = it.second;
        cout<<"key: "<<key <<" "<< "Value: "<<value <<endl;
    }


     //find? // table/map very fast (avg case comp) O(1)
     if(table.find(2) != table.end()){
        //found
        int value = table[2];
        cout<<"value found: "<< value<<endl;
     }else{
        //not found
        cout<<"value not found"<<endl;
     }

     //deletion
     table.erase(2);
     cout<<"after erase"<<endl;
     for(auto it:table){
        int key = it.first;
        int value = it.second;
        cout<<"key: "<<key <<" "<< "Value: "<<value <<endl;
    }



    
    return 0;
}