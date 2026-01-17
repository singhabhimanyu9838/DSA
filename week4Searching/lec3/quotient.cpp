 //finding quotient if divisor and divident is given but without using operation of / (divide) or %
    //Input :divident = 10,divisor = 2
    //output : 5
    //explanation : 10/2 = 5

    //Input :divident = 10,divisor = 3
    //output : 3
    //explanation : 10/3 = 3.3333.. which is truncated to 3

    //Input :divident = 10,divisor = -2
    //output : -5
    //explanation : 10/-2 = -5


#include<iostream>
using namespace std;

int getQuotient(int divident ,int divisor){

    int s = 0;
    int e = divident;
    int mid = s+ ((e-s)>>1);
    int quotient = -1;
    
    while (e>=s)
    {
        if(mid*divisor==divident){
            return mid;
        }
        if(mid*divisor<divident){
            quotient = mid;
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid = s+ ((e-s)>>1);
    }
    return quotient;
}

int main(){
   
    int divident = 13;
    int divisor = -2;


    //mission is to find Quotient
    int ans = getQuotient(abs(divident),abs(divisor));
    //ans answer positive values k hisab se aara h
    if((divident <0 && divisor>0) || (divident >0 && divisor < 0)){
        ans = 0-ans;
    }
    cout<<"final ans: "<<ans<<endl;

    return 0;
}