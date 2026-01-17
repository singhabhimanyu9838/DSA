#include<iostream>
#include <climits>
#include<vector>
using namespace std;

// int max(int a ,int b){
//     if(a>b)return a;
//     else {return b;}
// }

//print array
void printArray(int arr[],int size,int index){
    //base case
    if(index == size){
        return ;
    }
    //recursive relation
    //1 case main solve karunga 
    cout<<arr[index]<<" ";
    //baaki recursion sambhal lega
    printArray(arr,size,index+1);
}


//search in array
bool searchArr(int arr[],int size,int index,int search){
    //base case
    if(index >= size){
        return false;
    }
    if(search == arr[index]){
        return true;
    }
    

    // recursie relation
    bool ans = searchArr(arr,size,index+1,search);
    return ans;
}


//max in array
void maxInArray(int arr[],int size,int index ,int &maxi){
//base case
 if(index == size){
    //entire array traverse kr chuka hu
    return ;
 }
 //recursive relation
 //1 case mera
 maxi = max(maxi , arr[index]);
 //baki sab tera -> recursion
 maxInArray(arr,size,index+1,maxi);

}

//min in array
void minInArray(int arr[],int size , int index , int &mini){
    if(index == size){
        return ;
    }

    mini = min(mini,arr[index]);

    minInArray(arr,size,index+1,mini);
}

//print odd in array
void printOdd(int arr[], int size, int index){
    if(index == size){
        return ;
    }
    if(arr[index] & 1){
        cout<<arr[index]<<" ";
    }
    printOdd(arr,size,index+1);
}


void printEven(int arr[], int size, int index,vector<int>&ans){
    if(index == size){
        return ;
    }
    if(!(arr[index] & 1)){
        // cout<<arr[index]<<" ";
        ans.push_back(arr[index]);
    }
    printEven(arr,size,index+1,ans);
}


//binary search
int binarySearch(int arr[],int n,int s,int e,int target){
    if(s>e){
        return -1;
    }
    int mid = (s+e)/2;
    //1 case main karunga
    if(arr[mid] == target){
        return mid;
    }
    //baki recursion sambhal lega 
    //arr[mid] agar target k equal nahi h
    //iska matlab ya toh target bada h,
    //ya toh target chotta h
    if(target > arr[mid]){
        //right
        s = mid + 1;
        return binarySearch(arr,n,s,e,target);
    }else{
        //left
        e = mid-1;
        return binarySearch(arr,n,s,e,target);
    }
}


//digit separator

void digitNum(int num){
    if(num == 0){
        return;
    }
    int newnum = num/10;
    digitNum(newnum);
   
    int ans = num %10;
    cout<<ans<<" ";   
}


//is sort or not 

bool isSort(int arr[],int index, int size){
    if(index == size -1){
        return true;
    }
    if(arr[index] <= arr[index+1]){ 
        return isSort(arr,index+1,size);
    }
    else{
        return false;
    }
}




int main(){

    //print array

    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int index =0;
    int search = 500;
    printArray(arr,size,index);
    cout << endl;

    //search in array
    if(searchArr(arr,size,index,search)){
        cout << search << " is found in array" << endl;
    }else{
        cout<<"not found"<<endl;
    }

    //max in array
    int maxi = INT_MIN;
    maxInArray(arr,size,index,maxi);
    cout<<"Max no -> "<<maxi <<endl;

    //min in array

    int mini = INT_MAX;
    minInArray(arr,size,index,mini);
    cout<<"MIN n0 -> "<<mini<<endl;

    //printing odd values

    int arr1[] = { 10,11,12,13,14,15,17};
    int size1 = 7;
    printOdd(arr1,size1,index);

    //printing even values
    cout<<endl;
    vector<int>ans;
    printEven(arr1,size1,index,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    
    //binary Search

    int arr2[]= {10,20,30,40,50,60,70};
    int target = 70;
    int size2 = 7;
    int s=0, e = size2 -1;
    cout<<endl;
    int val = binarySearch(arr2,size2,s,e,target);
    cout<<"Answer index: "<< val <<endl;


    //digit separator

    int num = 389;
    digitNum(num);

    //is sorted or not

    int sort[]= {10,20,30,40,50};
    int size3 = 5;
    // int index =0; /*Alread made upper que */
    cout<<endl;
    bool ans3 = isSort(sort,index,size3);
    cout<<ans3<<endl;
    
    






    return 0;
}