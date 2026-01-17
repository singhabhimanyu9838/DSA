#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleValue(vector<long long>&arr , int n , int m , int mid){
    int count =0;
    int totalCount =0;
    for(int i = 0;i<n;i++){
        if(arr[i]>mid){
            count = arr[i]-mid ;
            totalCount+=count;
        }
    }
    if(totalCount >= m){
        return true;
    }else{
        return false;
    }
}

int main(){

    // int n;
    // long long m;
    // cin >> n >> m;

    // vector<long long> arr(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // or 

    vector<long long> arr = {4,42,40,26,46};

    
    if (arr.empty()) {
        cout << "Invalid input: array is empty" << endl;
        return 0;
    }
    int n = arr.size();
    int m = 20;
    int ans = -1;
    int e = *max_element(arr.begin(),arr.end());
    int s= 0;
    while(e>=s){
        int mid = s+(e-s)/2;
        if(isPossibleValue(arr,n,m,mid)){
            ans = mid;
            s = mid+1;
        }else{
            e = mid-1;
        }
    }

    cout<<ans<<endl;

    return 0;
}