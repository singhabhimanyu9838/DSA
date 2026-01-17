#include<iostream>
#include<vector>
using namespace std;


int findPeak(vector<int>&arr){
    // using store and compute method 
    int s=0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    int maxIndex = -1;

    while(e>=s){

        if(arr[mid] < arr[mid+1]){
            s = mid+1;
        }else{
            maxIndex = mid;
            e = mid-1;
        }
        mid = s+ (e-s)/2;
    }
    return maxIndex;
}

int findPeak2(vector<int>&arr){
    //without store and compute method
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while (e>s)
    {
        if(arr[mid]<arr[mid+1]){
            s= mid+1;
        }else{
            e= mid;
        }
        mid = s+(e-s)/2;
    }
    
    return mid;
}


int main(){

    vector<int>arr = { 1,2,3,4,5,6,7,8,9,5,4,3,2};
    
    //Using store and compute method
    int mountainPeak  = findPeak(arr);
    cout<<"using store and and compute method"<<endl;
    cout<<"Max index of mountain: "<<mountainPeak<<endl;


    // Without using store and compute  method
    cout<<"Another method without store and compute method"<<endl;
    int mountainPeak2 = findPeak2(arr);
    cout<<"Max index of mountain: "<<mountainPeak2<<endl;



    return 0;
}