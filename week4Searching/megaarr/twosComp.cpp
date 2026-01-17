#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> findComplement(vector<int>arr){
    
    int n=arr.size();
    vector<int>twosComp(n+1,0);
    //step 1. flip the bits
    for(int i=n-1,k=twosComp.size()-1;i>=0;i--,k--){
        twosComp[k]=arr[i] == 0 ? 1 : 0;
    }
    // step 2. add 1
    int carry = 1;
    for(int i = twosComp.size()-1;i>=0;i--){
        int sum = twosComp[i] + carry;
        twosComp[i]= sum%2;
        carry = sum /2;
    }
    if(carry){
        twosComp[0]=carry;
    }

    return twosComp;

}

int main(){

    
    vector<int>arr = { 1,1,1,0,1,0,1,1,0};
    vector<int>twosComp = findComplement(arr);
   for(int i=0;i<twosComp.size();i++){
    cout<<twosComp[i];
   }
   cout<<endl;


    return 0;
}