#include<iostream>
#include<algorithm>
using namespace std;

void findFirstOccurrence(int arr[],int n,int target ,int &ansIndex){
    int s= 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] == target){
            //ans found -> may or may not be
            //store and compute
            ansIndex = mid;
            //kyoki first occurence ki baat hori hai 
            //toh batao left me jau first occ k liye ya right me
            //to left me jao
            e=mid-1;
        }
        if(target > arr[mid]){
            //right me jao
            s = mid+1;
        }
        if(target < arr[mid]){
            //left me jao
            e  = mid-1;
        }
        //ye main bhul jata hu
        mid = s + (e-s)/2;
    }
}

void findLastOccurrence(int arr[],int n,int target ,int &ansIndex){
    int s=0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            ansIndex = mid;
            s = mid+1;
        }
        if(arr[mid]<target){
            s = mid+1;
        }if(arr[mid]>target){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
}

int findMissing(int arr[],int n){
    sort(arr,arr+n);
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int number = -1;
    
    while(s<=e){
        int diff = arr[mid] - mid;
        if(diff == 0){
            s = mid +1;
        }
        else if( diff == 1){
            e=mid-1;
            number = mid;
        }
        mid = s + (e-s)/2; 
    }
    if(number==-1){
        return n;
    }
    return number;
}


int main(){

    int arr[]={20,20,20,20,20,20,20,30,40,50,60};
    int n =11;
    int target =20;
    // -1 means target not found
    int ansIndex = -1;
    //Binary search lagane jaa raha hu ,toh pka array sorted hoga

    findFirstOccurrence(arr,n,target,ansIndex);
    int first = ansIndex;
    cout<<"First Occ index : "<<ansIndex<<endl;
    findLastOccurrence(arr,n,target,ansIndex);
    int last = ansIndex;
    cout<<"Last Occ index : "<<ansIndex<<endl;

    //total occurrence
    cout<<"total occurence : "<<(last - first)+1<<endl;


    //missing no.

    int arr2[]={5,2,4,3,0,1};
    int n1 = 6;
    findMissing(arr2,n1);
     cout <<"Missing in the array : "<<findMissing(arr2,n1);


    return 0;
}