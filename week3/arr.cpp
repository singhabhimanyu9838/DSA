#include<iostream>
using namespace std;


int main(){
    //creation 

    // int arr[10];

    //error
    // int brr[];

    int brr[]= {10,3,23,56,9};
    int crr[4]= {0};

    cout <<brr[1]<<endl;
    cout <<crr[2]<<endl;

//filling same no. at every places of array

    int drr[5];
    fill(drr,drr+5,25);
    cout<<drr[3]<<endl;
    cout<<drr[2]<<endl;


 //taking input in array
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the value for box index: "<<i<<endl;
        cin>>arr[i];
    }
//giving the output
    for(int i=0;i<5;i++){
        // cout<<arr[i]<<" ";
        cout<<i[arr]<<" ";
    }



    return 0;
}