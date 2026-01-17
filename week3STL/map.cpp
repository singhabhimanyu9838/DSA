#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    //creation 
    //operation in constant time in unoredered_map
    //operation in O(logn) time in  oredered_map

    unordered_map<string , string> table ;
    //insertion
    table["in"] = "India";
    table.insert(make_pair("en" , "England"));

    pair<string ,string> p;
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);


    if(table.count("in")==0){
        cout<<"key not found"<<endl;
    }
    if(table.count("in")==1){
        cout<<"key found"<<endl;
    }

//    if( table.find("in") !=table.end()){
//     cout<<"key found"<<endl;
//    }else cout<<"key not found"<<endl;

    // cout<<table.size()<<endl;
    // table.erase(table.begin(),table.end());
    // cout<<table.size()<<endl;

    // cout<< table.at("in")<<endl;
    // // table.at("in") = "Hindustan";
    // table["in"] = "India2";
    // cout<< table.at("in")<<endl;


    // unordered_map<string ,string> :: iterator it = table.begin();
    // while(it != table.end()){
    //     pair<string ,string> p = *it;
    //    cout<< p.first <<" " << p.second <<endl;
    //     it++;
    // }


    // cout<< table.size()<<endl;
    // table.clear();
    // cout<< table.size()<<endl;

    // if(table.empty() == true ){
    //     cout<<"map is empty"<<endl;
    // }else cout<<"not empty"<<endl;




//odered_map or map //
 /*All function of unordered_map is same for ordered_map ->(map)*/
    map<string , string> table ;
    //insertion
    table["in"] = "India";
    table.insert(make_pair("en" , "England"));

    pair<string ,string> p;
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);

    
    map<string ,string> :: iterator it = table.begin();
    while(it != table.end()){
        pair<string ,string> p = *it;
       cout<< p.first <<" " << p.second <<endl;
        it++;
    }


    map<int ,string> table1;
    table1.insert(make_pair(3,"Love"));
    table1.insert(make_pair(1,"Anita"));
    table1.insert(make_pair(2,"Babita"));
     map<int ,string> :: iterator it1 = table1.begin();
    while(it1 != table1.end()){
        pair<int ,string> p1 = *it1;
       cout<< p1.first <<" " << p1.second <<endl;
        it1++;
    }

    return 0;
}