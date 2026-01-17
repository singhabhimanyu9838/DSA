#include<iostream>
using namespace std;


void junk(int *i,int *j){
    *i = *i**i;
    *j=*j**j;

}


int main(){
    int i=5;
    int j=2;
    junk(&i,&j);
    cout<<"i ="<<i<<" ," <<" j = "<< j<<endl;


    //que.2
    int x[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    int *n = &x[0][0];
    cout<<*(*(x+2)+1)<<endl;
    cout<<*(*x+2)+5<<endl;
    cout<<*(*(x+1))<<endl;
    cout<<*(*(x)+2)+1<<endl;
    cout<<*(*(x+1)+3)<<endl;
    cout<<*n<<endl;  
    cout<<*(n+2)<<endl;
    cout<<(*(n+3)+1)<<endl;
    cout<<*(n+5)+1<<endl;
    cout<<(++*n)<<endl;

    int (*m)[3][5] = m;


    return 0;
}