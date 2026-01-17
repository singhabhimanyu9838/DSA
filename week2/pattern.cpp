#include<iostream>
using namespace std;
int main(){
    int row;

    //For pyramid
    cout<<"Enter the no. of row = ";
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            if(j<row-(i+1)){
                cout<<" ";
            }else
            cout<<"* ";
        }
        cout<<endl;
    }

    // or

    for(int i=0;i<row;i++){
        for(int j=0;j<row-1-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //inverted pyramid

    for(int i = 0;i<row;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<row-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //or

    for(int i=0;i<row;i++){
        for(int j =0;j<row;j++){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    //Inverted pyramid

    for(int i=0;i<row;i++){
        for(int j=0;j<row-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        for(int j =0;j<row;j++){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    //Hollow pyramid

    for(int i=0;i<row;i++){

        for(int j=0;j<row-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            if(i==0||i==1||i==row-1||j==i||j==0)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    //Hollow inverted pyramid

    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<row-i;j++){
            if(i==0||i==row-1||j==0||j==row-i-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    //Hollow Diamond
        for(int i=0;i<row;i++){

        for(int j=0;j<row-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            if(i==0||i==1||j==i||j==0)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<row-i;j++){
            if(i==row-1||j==0||j==row-i-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    //mix pyramid

    for(int i=0;i<row;i++){

        for(int j=0;j<=2*row;j++){
            if( j>row-i-1 && j<=2*row-4+i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<=2*row;j++){
            if(j>row-4+i && j<2*row-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    //or

    for(int i=0;i<row;i++){
        for(int j=0;j<row-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<row-i;j++){
            cout<<"*";
        }
        cout<<endl; 
    }

    //fancy pyramid

    for(int i=0;i<row;i++){
        for(int j=0;j<i+1;j++){
            if(j==i){
                cout<<i+1;
            }else 
                cout<<i+1<<"*";
        }
        cout<<endl;
    }

    //or

    for(int i=0;i<row;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2==0){
                cout<<i+1;
            }else
                cout<<"*";
        }
        cout<<endl;
    }

    // inverted fancy pyramid
    for(int i=0;i<row;i++){
        for(int j=0;j<2*(row-i)-1;j++){
            if(j%2==0){
                cout<<row-i;
            }else
            cout<<"*";
        }
        cout<<endl;
    }

    //ABCBA type pyramid

    for(char i=0;i<row;i++){
        for(char j=0;j<i+1;j++){
            char a='A'+j;
            cout<<a;
        }
        for(int j=i;j>=0;j--){
            char a ='A'+j-1;
            if(a>=65){
                  cout<<a;
            }
        }
       cout<<endl; 
    }

    //or

     for(char i=0;i<row;i++){
        for(char j=0;j<i+1;j++){
            char a='A'+j;
            cout<<a;
        }
        for(int j=i;j>0;j--){
            char a='A'+j-1;
            cout<<a;
        }
       cout<<endl; 
    }

   
    return 0;
}