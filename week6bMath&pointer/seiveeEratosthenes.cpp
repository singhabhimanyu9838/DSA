//Finding the no. of count of prime no. from 0 to n 

#include<iostream>
#include<vector>
using namespace std;

vector<bool>Sieve(int n){
    //create siev array of size telling isPrime.
    vector<bool>sieve(n+1,true);
    sieve[0] = sieve[1] = false;
    int count =0;
    for(int i=2;i*i<=n;i++){//optimisation 2
        if(sieve[i]==true){
            count++;
            // int j = i*2;

            int j = i*i; //optimisation 1: first unmarked number would be i*i , as others have been marked by 2 to (i-1)
            while(j<=n){
                sieve[j] = false;
                j+=i;
            }
        }
    }
    return sieve;
}

int main(){
    vector<bool>sieve = Sieve(25);
    for(int i=0;i<=25;i++){
        if(sieve[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}