#include<iostream>
using namespace std ;
int main(){

    // cout <<( 4 & 5 )<<endl;
    // cout <<( 4 | 5 )<<endl;
    // cout <<( ~1 )<<endl;
    // cout <<( 5<<2 )<<endl;
    // cout <<( 5>>1 )<<endl;
    // cout <<( 5^5 )<<endl;
    // cout <<( 5^4 )<<endl;
    

    // int i =1;
    // for( ; ; ){
    //     if(i>10){
    //         break;
    //     }
    //     cout << "Abhimanyu" << endl;

    //     i=i+1;
    // }
    for(int i = 1;i<=100;i++){
        if(i%5==0 || i%7==0){
            continue;
        }
        else{
            cout<<i << " ";
        }
    }

    return 0;
}