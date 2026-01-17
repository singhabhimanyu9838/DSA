#include<iostream>
using namespace std;


void solve(int* arr,int size){
    cout<<sizeof(arr)<<endl;
}

int main(){

    // int arr[] = {10,20,30,40,50};
    // int size = 5;

    // solve(arr,size);

    //integer -> stack memory
    int a=5;
    cout<<a<<endl;

    //integer -> Heap memory
    int *p = new int;
    *p =5;
    cout<<*p<<endl;

    //deallocate -> delete keyword
    delete p;

    //array -> stack memory

    int arr[5] = { 0};
    cout<<arr[0]<<arr[1]<<arr[2]<<endl;

    //array -> Heap memory

    int* brr = new int[5]();
    cout<<brr[0]<<brr[1]<<brr[2]<<endl;

    //2D array -> Stack memory
    int arr1[2][4] = {
        {2,4,5,6,},
        {1,2,3,4}
    };

    //2D array -> Heap memory
    // 4 -> row count
    // 3 -> column count
    int **arr2 = new int *[4];
    for(int i=0;i<4;i++){
        //hr pointer k liye ek 1D array create krna h
        arr2[i] = new int[3];
    }

     //taking input 
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }

    cout<<endl<<"Printing the 2D array"<<endl;

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

//deleting the array , it can be done by doing individually

    for(int i=0;i<4;i++){
        delete[] arr2[i];
    }



    

    




    return 0;
}