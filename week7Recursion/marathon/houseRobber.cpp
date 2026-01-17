#include<iostream>
#include<vector>
using namespace std;

//similar to --> leetcode 198 (House robber)

int nonAdj(vector<int>&arr,int index,int n)
{
    if(index >= n){
        return 0;
    }
    int fsum = arr[index] + nonAdj(arr,index+2,arr.size());

    int rsum = nonAdj(arr,index+1,arr.size());

    int ans = max(fsum ,rsum);

    return ans;

}


int main(){
    vector<int>arr={2,4,1,6,8,5,9};
    int ans =nonAdj(arr,0,arr.size());
    cout<<ans;

    return 0;
}