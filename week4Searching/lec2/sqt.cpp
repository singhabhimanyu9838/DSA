#include<iostream>
#include<vector>
using namespace std;

double mySqrt(int x){
    int s=0;
    int e=x;
    long long int mid = s+ (e-s)/2;
    int ans = -1;

    while(s<=e){
        //happy case
        long long int product = mid * mid;
        if(product == x){
            return mid;
        }
        if(product < x){
            //may or may not be 
            //store and compute 
            ans = mid;
            //got to right to find or jyada paas ka answer
            s = mid +1;   
        }else{
            //mid*mid > x --> left
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    // return ans;
    double sqrtAns = (double)ans;

    //precision upto how many  digits
    int precision;
    cout<<"enter the precision upto how many digits: "<<endl;
    cin>>precision;
    double factor = 1;
    cout<<"First:"<<sqrtAns<<endl;

    double finalAns = sqrtAns;

    for(int i=0; i<precision;i++){
        factor = factor/10.0;
        cout<<"factor"<<factor<<endl;
        
        for(int n=0; n<=9;n++){
            double toAdd = n*factor;
            cout<<"toAdd: "<< factor <<endl;
            double newAns = sqrtAns+toAdd;
            if(newAns*newAns < x){
                finalAns = sqrtAns + toAdd;
                cout<<"sqrtAns updated to: "<<finalAns<<endl;
                
            }else{
                cout<<"breaking"<<endl;
                break;
            }
        }
        sqrtAns=finalAns;
    }
    return finalAns;
}

int main(){
    int num = 54;

    double ans = mySqrt(num);
    cout<<ans<<endl;
    
    return 0;
}