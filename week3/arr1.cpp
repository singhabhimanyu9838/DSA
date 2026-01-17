#include<iostream>
#include<limits.h>//for using INT_MIN and INT_MAX
#include<algorithm>//for using max function 


using namespace std;

void print(int arr1[],int size){
    for(int i =0;i<size;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}
void solve(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*10;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool findtarget(int arr[],int size ,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }else
        return false;
    }
    cout<<endl;
}

int findMax(int arr[],int size){
    int maxNumber = INT32_MIN;
    for(int i=0;i<size;i++){

        // using In-build function
        maxNumber=max(maxNumber,arr[i]);

                   //or

        // if(arr[i]>maxNumber){
        //     maxNumber=arr[i];
        // }
    }
    return maxNumber;

}

void counting(int arr[] ,int size){
    int zero =0;
    int one=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            one++;
        } else{
            zero++;
        }
    }
    cout<<"no. of ones:"<<one<<endl;
    cout<<"no. of zeros:"<<zero<<endl;
    
}

void extreme(int arr[],int size){
    int i=0,j=size-1;
    
    while(i<=j){
        if(i==j){
            cout<<arr[i]<<" ";
            i++;
        }else{
        cout<<arr[i]<<endl;
        i++;
        cout<<arr[j]<<endl;
        j--;
        }

    }
    
}

int main(){
//function with array

int arr1[]={10,20,30,40,50};
int size =5;

print(arr1,size);
solve(arr1,size);


// Linear search algo
    findtarget(arr1,5,40);
    if(findtarget){
        cout<<"no. is present in the array"<<endl;
    }else
    cout<<"not present in array"<<endl;


//find max value in the array
   int number=findMax(arr1,size);
    cout<<"Max no. in the arr1 is:"<<number<<endl;


    
//countintg no. of 0's and 1's

    int arr2[]={1,1,0,0,0,1,1,0,1,0,0};
    int size2 =11;
    counting(arr2,size2);

//extreme printing of any array
    int arr3[]={12,23,45,67,89,98,99};
    int size3=7;
    extreme(arr3,size3);

   //swap

   int a=4,b=7;

//    swap(a,b);
//     cout<<a<<" "<<b<<endl;
//or


//    int temp=a;
//     a=b;
//     b=temp;
//     cout<<a<<" "<<b<<endl;

//or
    // a=a+b;//sum of a and b store in a,a=11,and b=7
    // b=a-b;//b=11-7=4
    // a=a-b;//a=11-4=7
    // cout<<a<<" "<<b<<endl;

    //or
     a=a^b;
     b=b^a;
     a=a^b;
   cout<<a<<" "<<b<<endl;
    return 0;
}