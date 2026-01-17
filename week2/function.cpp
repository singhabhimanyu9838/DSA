#include<iostream>
#include <cmath>
using namespace std;

//Function Definition
void sayName(){
    cout<<"Abhimanyu Singh";
}
bool checkAge(int age){
    if(age>18)
      return true;

      else
      return false;
}

// WAF to calculate a to the power of b
int calculatePower(int a,int b){
    int result = pow(a,b);
    return result;
}
//sumation of AP
int summationAP(int a,int l,int n){
    int ans=((n)*(a+l))/2;
    return ans;
}
//prime no
bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return true;
        }else 
        return false;
    }
}

int main (){
//Function call
    sayName();
    cout<<endl;

    int age =19;
    if(checkAge(age))
    {
        cout<<"can vote";
    }else
    cout<<"canot vote";
    cout<<endl;

    int a=2;
    int b=5;
    int value=calculatePower(a,b);
    cout << value;
    cout<<endl;

    int AP = summationAP(2,10,5);
    cout<<AP;
    cout<<endl;
    
    bool prime = checkPrime(71);
    if(prime){
        cout<<"not prime no";
    }else
    cout<<"prime no";
    
    return 0;
}