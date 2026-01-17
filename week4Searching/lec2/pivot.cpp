#include<iostream>
#include<vector>

using namespace std;

int findPivot(vector<int>&arr){
    int s= 0;
    int n = arr.size();
    int e = n-1;
    int mid = s+(e-s)/2;
    while(e>=s){
        if(s == e) {
            //single element k case me 
            //humne usse hi pivot maaanlia hai
            return s;
        }
        if((mid+1) < n && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[s]>arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){

    vector<int>arr = {40,50,60,70,80,10,20,30};
    //Finding the pivot element using binary search time complexity O(logn) and we can also be find using nested loop but in the nested loop time complexity is O(n^2)

    int pivotElement = findPivot(arr);

    cout<<"Pivot element: "<<pivotElement<<endl;


    return 0;
}