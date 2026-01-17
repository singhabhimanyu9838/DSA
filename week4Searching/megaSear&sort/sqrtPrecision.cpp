#include<iostream>
#include<algorithm>

using namespace std;


//method 1 function for precision method

int mySqrt(int n){
    int s =0, e = n;
    int ans = 0;
    while(e>=s){
        int  mid = s + (e-s)/2;
        if(mid * mid ==n){
            return mid;
        }
        else if(mid * mid > n){
            e = mid-1;
        }else if(mid*mid < n){
            ans = mid;
            s = mid+1;
        }
       
    }
    return ans;
}

double myPrecision(int n){
    double sqrt = mySqrt(n);//TC : O(logn) +  O(Precision)
    int precision = 13;
    double step = 0.1;
    while(precision--){
        double j = sqrt;
        while(j*j <=n){
            //store and compute
            sqrt = j;
            j+=step; //j -> 7.1
        }
        //after this while loop I got 1 precision ans.
        step/=10;
    }
    return sqrt;
}


//method 2 to find the precision 


double myprecision2(int n){
    double s =0;
    double e = n;
    double mid = s+(e-s)/2;
    double ans = -1;

    while(e-s>0.000000001){
        if( mid*mid <= n){
            ans = mid;
            s = mid;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int n= 63;

    //method 1 to find precision

    double ans = myPrecision(n);
    // cout<<ans<<endl;
    //cout hota hai , it only print 5 precision
    // Zada kaise kare 

    // printf("Precision Sqrt : %.13f\n",ans);

    //method 2 to find the precision 

    double ans2 = myprecision2(n);  
    printf("Precision Sqrt : %.9f\n",ans2);
    




    return 0;
}