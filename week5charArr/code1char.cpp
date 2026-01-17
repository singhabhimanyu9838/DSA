#include<iostream>
#include<cstring>
using namespace std;


// 1... Count character

int getLength(char arr[],int size){
    int count =0;
    int index =0;
    while(arr[index] != '\0'){
        //jab tak array me null character na milta
        //tab tak increment karo
        //and aage badho
        count++;
        index++;
    }
    return count;
}


//2.... Replace character

void replaceCharacter(char originalChar, char newChar, char arr[], int size) {
    for(int i=0;i<size;i++){
        if(arr[i] == originalChar){
            arr[i] = newChar;
        }
    }
}

void convertIntoUpperCase(char arr[],int n){
    int len = getLength(arr,n);
    for(int i=0;i<len;i++){
        char ch = arr[i];
        //if letter is a lowercase letter 
        //then only convert it
        if(ch>='a' && ch <= 'z'){
            ch = ch -'a' + 'A';
        }
        arr[i] = ch;
    }
}

void convertIntoLowerCase(char arr[],int n){
    int len = getLength(arr,n);
    for(int i=0;i<len;i++){
        char ch = arr[i];
        //if letter is a lowercase letter 
        //then only convert it
        if(ch>='A' && ch <= 'Z'){
            ch = ch -'A' + 'a';
        }
        arr[i] = ch;
    }
}

void reverseCharArray(char arr[],int n){
    int len = getLength(arr,n);

    int i=0;
    int j=len-1;

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

bool checkPalindrome(char arr[],int n){
    int len = getLength(arr,n);
    int i=0;
    int j=len-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            //not a palindrome
            return false;
        }
    }
    return true;
}


int main(){
    // //creation

    // char arr[100];

    // cout<<"Enter your name"<<endl;
    // //input
    // // cin>>arr;
    // cin.getline(arr,12);

    // //output
    // cout<<"Your name is: "<<arr<<endl;

    // cout<<arr[0]<< "-->"<<(int)arr[0]<<endl;
    // cout<<arr[1]<< "-->"<<(int)arr[1]<<endl;
    // cout<<arr[2]<< "-->"<<(int)arr[2]<<endl;
    // cout<<arr[3]<< "-->"<<(int)arr[3]<<endl;
    // cout<<arr[4]<< "-->"<<(int)arr[4]<<endl;




    // char arr[100];
    // cout<<"Enter input"<<endl;
    // // cin>>arr;
    // // cin.getline(arr,82,'\t');
    // cin.getline(arr,82,'.');
    // cout<<endl<<arr<<endl;

/* 1... Count character*/

    // char arr[100];
    // cin>>arr;
    // cout<<getLength(arr,100)<<endl;

/* 2... Replace character*/

    // char arr[1000];
    // cin>>arr;
    // replaceCharacter('@',' ',arr,1000);
    // cout<<arr<<endl;

/* 3... Convert into upper case*/

    // char arr[1000];
    // cin>>arr;
    // convertIntoUpperCase(arr,1000);
    // cout<<arr<<endl;
    // convertIntoLowerCase(arr,1000);
    // cout<<arr<<endl;


/* 4.... Swap the arr*/

    // char arr[1000];
    // cin>>arr;
    // reverseCharArray(arr,1000);
    // cout<<arr<<endl;

/*  5... Palindrome*/

//    char arr[1000];
//    cin>>arr;
   
//    cout<<"Palindrome or not : "<<checkPalindrome(arr,1000)<<endl;



    char arr1[100];
    cout<<"Enter the input"<<endl;
    cin>>arr1;

    char arr2[100];
    cout<<"Enter the input"<<endl;
    cin>>arr2;

    char arr3[100];
    cout<<"Enter the input"<<endl;
    cin>>arr3;

    cout<<strcat(arr1,arr2)<<endl;
    // cout<<strlen(arr1)<<endl;
   



    return 0;
}