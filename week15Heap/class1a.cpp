#include<iostream>
using namespace std;


class Heap{
public:
    int *arr;
    int capacity;
    int index;  

    Heap(int n){
        this->capacity = n;
        arr = new int[n]();
        index =0;
        //jb bhi mujhe insert krna hoga , tb index+1 krke insert krdena
    }

    void printHeap(){
        for(int i=0;i<capacity;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void insert(int val){
        if(index == capacity -1){
            cout<<"Overflow"<<endl;
            return;
        }

        //agar jagah available h
        index++;
        arr[index] = val;
        //now put val at right position 
        //by comparing with parent node
        int i =index;
        while(i > 1){
            
            int parentIndex = i/2;

            if(arr[parentIndex] < arr[i]){
                swap(arr[parentIndex] , arr[i]);
                i = parentIndex;
            }else{
                //parent already bda h , no need to do anything
                break;
            }
        }
    }

    void deleteFromHeap(){
        //replacement
        swap(arr[1] , arr[index]);
        //size decrease
        index--;
        //heapify
        // heapify(arr,index,1);
    }

    
};

void heapify(int *arr , int n ,int currIndex){
        //n -> number of elements in heap
        int i=currIndex;
        int leftIndex = 2*i;
        int rightIndex = 2*i+1;

        int largestKaIndex =i;
        //assuming i pr value hi sabse sabse bdi value h
        //pr ho skta h , sabse bdi value left ya right me ho

        // check for left 
        if(leftIndex < n && arr[leftIndex] > arr[largestKaIndex]){
            //left me bdi value mil gyi
            largestKaIndex = leftIndex;
        }

        // check for right 
        if(rightIndex < n && arr[rightIndex] > arr[largestKaIndex]){
            //right me bdi value mil gyi
            largestKaIndex = rightIndex;
        }

        //jb yaha aaaoge , tb tumhare paas , sabse bda value ka index hoga

        // largetsValue still i wali hi h , then no need to do anythings
        //agr largestKaIndex left ya right me se koi , then swap logic

        if(largestKaIndex != i){
            //left ya right me se koi h
            swap(arr[i] , arr[largestKaIndex]);
            i = largestKaIndex;
            //baaki recursion sambhal lega
            heapify(arr,n,i);
        }
        
    }

void buildHeap(int* arr , int n){
    for(int i=n/2;i>0;i--){
        heapify(arr , n ,i);
    }
}


//assuming  arr is a valid heap
void heapSort(int* arr , int n){
    //n -> size
    
    while(n > 1){
        //delete root element , swap root element with the last element
        swap(arr[1] , arr[n-1]);
        //delete last element
        n--;
        //heapify 1 index wala element
        heapify(arr , n ,1);
    }
}


int main(){

    int arr[] = {-1 , 10 ,20 ,30,40 ,50};
    int n=6;
    buildHeap(arr,n);
    cout<<endl;
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapSort(arr,n);
    cout<<endl<<"Printing Heap inside heapSort: "<<endl;
        for(int k=1;k<n ;k++){
            cout<<arr[k] <<" ";
        }cout<<endl;


    // Heap pq(10);
    // pq.insert(10);
    // pq.printHeap();
    // pq.insert(20);
    // pq.printHeap();
    // pq.insert(30);
    // pq.printHeap();
    // pq.insert(40);
    // pq.printHeap();
    // pq.insert(35);
    // pq.printHeap();

    // pq.deleteFromHeap();
    // pq.printHeap();


    return 0;
}