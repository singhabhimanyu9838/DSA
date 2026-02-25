#include<iostream>
using namespace std;

int getIthBit(int n , int i){
    int mask = (1 << i);
    int ans = n & mask;

    if(ans == 0)return 0;
    return 1;
}

void setIthBit(int n , int i ){
    int mask = (1 << i);
    n = n | mask;
    cout<<"Updated after make it set bit number: " << n <<endl;
}

void clearIthBit(int n , int i){
    int mask = ~(1 << i);
    n = n & mask ;
    cout<<"Updated after clear the bit number: "<< n << endl;
}

void updateIthBit(int n , int target , int i){
    //1. step clear the ith bit
    int mask = ~(1 << i);
    n = n & mask ;

    //2. create the mask of ith size
    int mask1 = (target << i);

    //taking OR operation with n
    n = n | mask1;

    cout<<"Udating the ith bit - > " << n<<endl;
}


void clearLastIthBits(int n , int i){
    int mask = (-1 << i);

    n = n & mask;

    cout<<"After claering last Ith bit - "<< n<<endl;
}

void countSetBit(int n){
    int count =0;

    while(n != 0){
        count++;
        n = n & (n-1);
    }
    cout<<"Total no. of set Bit- >" << count <<endl;
}

bool checkPowerofTwo(int n ){
    int count =0;

    while(n != 0){
        count++;
        n = n & (n-1);
    }
    if(count == 1)return true;
    return false;
}

void clearBitsInRange(int n , int i , int j){
    int a = (-1 << (i + 1));
    int b = ~(-1 << j);
    int mask = a | b;

    n = n & mask;

    cout<<"After claering bits in the range : "<< n <<endl;
}

int main(){

    int n = 20;

    //check even or odd
    cout<<n;
    if((n & 1) == 1)cout<<" Odd no . "<<endl;
    else{
        cout<<"even no . "<<endl;
    }


    //find ith bit 
    cout<<"Cal the ith bit of the no. -> "<<getIthBit(n , 3)<<endl;

    //set ith bit

    setIthBit(n , 3);

    //clear the Ith bit

    clearIthBit(n , 3);

    //update ith bit
    // General ways 
    // 1. hume ith bit ko clear krna hai 
    //2. ab jo bhi target update bit hai uska mask creat krlo 
    //3 . now we will take the OR opration with mask

    int num = 21;
    updateIthBit(num , 1 , 3);

    //clearing last Ith bits

    clearLastIthBits(num , 3);

    //count set bit

    countSetBit(21);

    //check power of 2

    cout<<checkPowerofTwo(32)<<endl;

    //clearing bits in the range

    clearBitsInRange(15 , 2 , 1);


    return 0;
}