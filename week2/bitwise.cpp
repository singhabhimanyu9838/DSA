#include<iostream>
using namespace std;

int main(){
    int z=(3^8^7^4^12^3^12^8^4);
    cout<<z;
    cout<<endl;
     if((3^8^7^4^12^3^12^8^4)==7){
        cout<<"output ";
    }else{
        cout<<"not";
    }
    cout<<endl;

    cout<< (5&3)<<endl;
    cout<< (5|3)<<endl;
    cout<< (~5)<<endl;
    cout<< (5^3)<<endl;
    cout<< (25>>1)<<endl;
    cout<< (25<<2)<<endl;
    cout<< (-10<<1)<<endl;
    cout<< (-1000>>2)<<endl;

    int number;
    cout<<"To find the no. is even or odd"<<endl;
    cout<<"Enter your no..= ";
    cin>>number;
    if((number&1)==0){
        cout<<number<<" is even no.";
    }
    else{
        cout<<number<<" is odd no.";
    }
    //or
    if(number&1){
        cout<<"odd";
    }else{
        cout<<"even";}

        cout<<endl;


    // Set bit 

    int no =5, setBit = 0;
    while(no!=0){
        if(no&1){
            setBit=setBit+1;
        }
        no =(no)>>1;
    }
    cout<<"total set bit = "<<setBit;

    return 0;


}