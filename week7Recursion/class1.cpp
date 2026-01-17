#include<iostream>
using namespace std;


//factorial
int getfactorial(int n){
    //base case -> mandatory
    if( n==0 || n==1 ){
        return 1;
    }
    //recursive call -> mandatory
    // fact(n) = n * fact(n-1);
    //recursion -> fact(n-1);
    int recursionKaAns = getfactorial(n-1);
    int finalAns = n* recursionKaAns;
    return finalAns; 
}

//printing n to 1
// void print(int n){
//     if(n>0){ //base case
//         cout<<n<<" "; //processing
//        print(n-1); //recursive call
//     }
// }


//printing 1 to n
void print(int n){
    if(n>0){ //base case
       
       print(n-1); //recursive call
       cout<<n<<" "; //processing
    }
}


//power
int pow(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive relation
    //pow(n) = 2*pow(n-1)
    int recAns = pow(n-1);
    int finalAns = 2*recAns;
    return finalAns;
    //processing
}


//fibonnaci

int fib(int n){
    //base case
    if(n==0 || n==1){
        return n;
    }
    //recursive relation
    //fib(n) = fib(n-1) + fib(n-2)
    int ans = fib(n-1) + fib(n-2);
    return ans;
}


//get sum of n

int getSum(int n){

    //base case
    if(n==1){
        return 1;
    }
    // recursive relation
    //sum(n) = sum(n-1) +n
    int ans = getSum(n-1) + n;
    return ans;
}




int main(){
    //factorial 

    // int n ;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // int ans = getfactorial(n);
    // cout<<"Factorial of "<<n << " is : "<<ans<<endl;


    //print n

    // int n;
    // cout<<"Enter the the number : ";
    // cin>>n;
    // print(n);

    //power

    cout<<pow(10)<<endl;

    //fibonnaci

    cout<<fib(9)<<endl;

    //get sum of n

    cout<<getSum(5)<<endl;








    return 0;
}