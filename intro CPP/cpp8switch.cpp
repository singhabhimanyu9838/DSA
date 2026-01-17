#include<iostream>
using namespace std;

int main()
{
    char grade;
    cout<<"enter your grade"<<endl;
    cin>>grade;
  switch(grade){
    case 'A':cout << "your marks will be in range of 90 to 100"<<endl;
    break;
    case 'B':cout << "your marks will be in range of 80 to 90"<<endl;
    break;
    case 'C':cout << "your marks will be in range of 70 to 80"<<endl;
    break;
    case 'D':cout << "your marks will be in range of 60 to 70"<<endl;
    break;
    default:cout  << "your marks will be in range of 0 to 60" ;
  }

    return 0;
}
