#include<iostream>
using namespace std;

void printPermutation(string &str , int i){
    //base case 
    if(i>=str.length()){
        // print
        cout<<str<<",";
        return ;
    }

        //1 case main aur baaki sab recursion
        //ki main i wale dabbe k upar ,hr ak element ko chance dunga

    for(int j =i;j<str.length();j++){
            //chance dene ke liye ,swap kia tha
            swap(str[i],str[j]);
            //baaki recursion dekh lega
            printPermutation(str,i+1);

            //backtracking
            swap(str[i],str[j]);
    }
    
} 

int main(){
    string str = "abc";
    int i=0;
    printPermutation(str,i);

    return 0;
}