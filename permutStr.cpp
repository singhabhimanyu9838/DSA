#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void permuteSTL(string a){
    cout<<a <<endl;
    while(next_permutation(a.begin(),a.end())){
        cout<<a<<endl;
    }
}

int main(){
    string a = "abc";
    permuteSTL(a);
    return 0;
}