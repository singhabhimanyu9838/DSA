#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[] , int s,int e ,int mid){

    //create left and right arrays
    int leftLength = mid-s+1;
    int rightLength = e - mid;

    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];

    //fill or copy the left and right array
    //copy original array -> values
    //original array ka starting index
    int index = s;
    //copying into left array
    for(int i=0;i<leftLength;i++){
        leftArr[i] = arr[index];
        index++;
    }
    //copying into right array
    index = mid +1;
    for(int i=0;i<rightLength;i++){
        rightArr[i] = arr[index];
        index++;
    }



    //merge logic
    int leftIndex =0;
    int rightIndex =0;
    int mainArrayIndex = s;

    while(leftIndex < leftLength && rightIndex < rightLength){
        if(leftArr[leftIndex] < rightArr[rightIndex]){
            arr[mainArrayIndex++] = leftArr[leftIndex];
            leftIndex++;
        }else{
            arr[mainArrayIndex++] = rightArr[rightIndex];
            rightIndex++;
        }
    }
    //I have to handle the 2 cases discussed in merge 2 sorted array wala quetion

    while(leftIndex < leftLength){
        arr[mainArrayIndex++] = leftArr[leftIndex];
        leftIndex++;
    }
    while(rightIndex < rightLength){
        arr[mainArrayIndex++] = rightArr[rightIndex];
        rightIndex++;
    }


    //delete heap memory
    delete[] leftArr;
    delete[] rightArr;


}

void mergeSort(int arr[] , int s,int e){
    //base case
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;
    //left part recursion se solve karwao
    mergeSort(arr,s,mid);
    //right part recurdion se solve karwao
    mergeSort(arr,mid+1,e);
    //dono ko merge kardo
    merge(arr,s,e,mid);
}

int main(){
    int arr[] = { 10,80,110,90,50,30,40,20};
    int size =8;
    int s =0;
    int e =size-1;

    cout<<"Before merge sort : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    mergeSort(arr,s,e);
    //printing entire array
    cout<<"After merge sort : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}