#include<iostream>
#include<vector>
using namespace std;
int findSqrt(int num){
    int s =0;
    int e = num;
    long long int mid = s + (e-s)/2;
    int root = -1;

    while(e>=s){
        if(mid*mid > num ){
            e = mid-1;
        }else{
            root = mid ;
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return root;
}

int main(){

    int number = 165;

    int sqrt = findSqrt(number);
    cout<<"Sqare root of any number : "<<sqrt<<endl;


    return 0;
}