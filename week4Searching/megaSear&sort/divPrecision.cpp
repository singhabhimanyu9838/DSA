#include<iostream>
using namespace std;

double findQuotient(int divisor, int dividend){
    double s= 0;
    double e = dividend;
    double mid = s + (e-s)/2;
    double ans = -1;
    while(e-s>0.00000000001){
        if(mid*divisor <= dividend){
            ans = mid;
            s = mid;
        }else{
            e = mid;
        }
        mid = s + (e-s)/2; 
    }
    return ans;
}


int main(){
    int divisor = 5;
    int dividend = 57;

    double ans = findQuotient(divisor,dividend);
    printf("Quotient precision upto ddecimal : %0.5f ",ans);

    return 0;
}