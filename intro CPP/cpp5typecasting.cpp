#include<iostream>
using namespace std;
int main(){
    //IMPLICIT TYPE CASTING
//1. int to float
    int num1 = 12;
    float num2 = 23.54;
    float result = num1 + num2 ;
    cout << result << endl;
//2. char to int
    char ch = 'A';
    // int a = ch + 1;
    char n = ch + 1;
    cout << n << endl;

    int a = 97;
    char my = a;//Implicit conversion from int to char
    cout << my << endl;


    //EXPLICIT CASTING 
// 1. DOUBLE TO INT
    double pi = 3.14149265;
    int inpi = (int)pi; //Explicit conversion from doublr to int
    cout << inpi <<endl;
//2. float to char
    float floatingNumber = 65.6;
    char charValue = (char)floatingNumber; //Explicit conversion from float to char
    cout <<charValue <<endl;
//3. int to float 
    int d = 10;
    int b = 3.0;
    float c = d/((float)b);
    cout << c ;


    return 0;
}