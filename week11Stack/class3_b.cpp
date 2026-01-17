#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;


void solve(vector<int>&arr , vector<int>&ans , int n){
    stack<int>s;
    s.push(-1);
    for(int i=0;i<n;i++){
        int element = arr[i];
        while(s.top()>=element){
           s.pop();
        }
        ans.push_back(s.top());
        s.push(element);

    }
    
}

int main(){
    vector<int>arr = {8,6,2,4,3};
    int n  = arr.size();
    vector<int>ans;
    solve(arr,ans , n);
    for(size_t i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}