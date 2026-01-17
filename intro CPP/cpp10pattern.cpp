#include<iostream>
using namespace std;
int main(){
    // for(int i=0;i<5;i++){
    //     for(int j = 0;j<5;j++){
    //         if(j==4){
    //             break;
    //         }else{
    //             cout<< "*" << " ";
    //         }
    //         // cout << "*" << " ";

    //     }
    //     cout <<endl;
    // }
  
  /*
    int n,m;
    cout<<"Enter the no. of row = "<<endl;
    cin>>n;
    cout<<"Enter the no. of column = "<<endl;
    cin>>m;

    for(int i=0;i<n;i++){
        if(i==0 || i==(n-1)){
          for(int j=0;j<m;j++){
              cout<< " *";
          }
        }else{
            for(int j=0;j<m;j++){
                if(j==0||j==(m-1)){
                    cout<<" *";
                }else{
                    cout<< " _";
                }

            }
            
        }
        cout<<endl;
    }
    */

   /*
    for(int i =0;i<4;i++){
        for(int j = 0;j<5;j++){
            if(i==0||i==3){
                cout << " *";
            }else{
                if(j==0||j==4){
                    cout<< " *";
                }else{
                    cout<< " _";
                }
            }
        }
        cout<<endl;
    }

    for (int i=0;i<=4;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
     cout<<endl;

    int n;
    cout<<"enter the no. of row and column";
    cin>>n;
    // for (int i=4;i>=0;i--){
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
       for (int i=0;i<n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    int r;
    cin>>r;
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
            if(i==0||i==1||i==r-1){
                cout<<"* ";
            }else{
                if(j==0||j==i){
                    cout<<"* ";
                }else{
                    cout<<"_ ";
                }
            }
        }
        cout<<endl;
    }

     for(int i=0;i<r;i++){
        for(int j=0;j<r-i;j++){
            if(i==0||i==r-2||i==r-1){
                cout<<"* ";
            }else{
                if(j==0||j==r-i-1){
                    cout<<"* ";
                }else{
                    cout<<"_ ";
                }
            }
        }
        cout<<endl;
    }
    */

    cout<<endl;
    for(int i=0;i<5;i++){
        for(int j= 0;j<4;j++){
            if(i==0||i==2){
                cout<<"* ";
            }else{
                if(j==0||j==3){
                    cout<<"* ";
                }else{
                cout<<"  ";
                }
            }
        }
        cout<<endl;
    } 

    return 0;
}