#include<iostream>
using namespace std;

int main(){

   /*
    int a =5;
    int* ptr=&a;
    cout<<ptr<<endl;
    cout<<&a<<endl;

    cout<<&ptr<<endl;
    cout<<*ptr<<endl; //value at address store in ptr or value at ptr  --> dereference operator

    int xyz = 15;
    int pqr = 12;

    int* ptr1 = &xyz;
    int* ptr2 = &pqr;

    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;


    int b = 5;
    int * pt = &b;
    cout<<sizeof(pt)<<endl;

    char c = 'a';
    char * pt1 = &c;
    cout<<sizeof(pt1)<<endl;

    long d = 5;
    long * pt2 = &d;
    cout<<sizeof(pt2)<<endl;


    int *nptr =0 ;
    cout<<nptr<<endl;

    */

    //practice
/*
    int a = 6;
    int *ptr = &a;


    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr +1<<endl;
    ptr+=1;
    cout<<ptr<<endl;
    *ptr = *ptr/2;
    cout<<*ptr<<endl;

    *ptr = *ptr + 1;
    cout<<*ptr<<endl;

    */


    // int a =5;
    // int* p =&a;
    // int* q = p;

    // cout<<"a: "<< a <<endl;
    // cout<<"&a: "<< &a <<endl;
    // // cout<<"*a: "<< *a <<endl;
    // cout<<"p: "<< p <<endl;
    // cout<<"&p: "<< &p <<endl;
    // cout<<"*p: "<< *p <<endl;
    // cout<<"q: "<< q <<endl;
    // cout<<"*q: "<< *q <<endl;

    // int arr[] = {10,20,30,40};

    // // arr = arr + 1;

    // char ch[100] = "Babber";
    // cout<< "base address : "<<&ch <<endl;
    // char * cptr = ch;

    // // cout<< cptr <<endl;

    // cout<<"ch "<<ch <<endl;
    // //lovebabber
    // cout<<"&ch "<<&ch<<endl;
    // //address ex-> 104
    // cout<<"ch[0] "<<ch[0]<<endl;
    // //B
    // cout<<"&cptr "<<&cptr<<endl;
    // //cptr address ex-> 420 
    // cout<<"*cptr "<<*cptr<<endl;
    // // -> B
    // cout<<"*(cptr + 3) "<<*(cptr + 3)<<endl;
    // // -> b
    // cout<<"cptr "<<cptr<<endl;
    // //Babber
    // cout<<"cptr+1 "<<cptr + 1<<endl;
    // //abber
    // cout<<"cptr+3 "<<cptr + 3<<endl;
    // //ber

    // char w  = 'b';
    // char *ptr = &w;
    // cout<<ptr<<endl;

    /*Void Pointer*/ 

    void *ptr;
    int x =10;
    ptr = &x;
    int *intPtr = static_cast<int*>(ptr);
    cout<<*intPtr<<endl;


    

    //string literal


    // char *ch  = "Abhimanyu";
    // ch[2] = 'z'; ////it gave the run time error
    // cout<<ch<<endl;

    const char *ch  = "Abhimanyu";
    // ch[2] = 'z'; //// compile time error
    cout<<ch<<endl;
    

    



    return 0;
}