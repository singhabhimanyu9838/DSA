#include<iostream>
#include<vector>
using namespace std;

bool isSort(int arr[],int size , int index){
    //base case 
    if(index == size-1){
        return true;
    }
    if(arr[index]<= arr[index+1]){
        return isSort(arr,size,index+1);
    }else{
        return false;
    }
}

//printing subsequences
void printSequences(string str , int i,string output,vector<string>&ans){
    //base case
    if(i == str.length()){
        // cout<< output <<endl;
        ans.push_back(output);
        return ;
    }

    //1 case khud solve karunga
    char ch = str[i];
    //include ch
    printSequences(str , i+1 ,output + ch,ans);
    //exclude ch
    printSequences(str , i+1 ,output,ans);

}

int main(){

    //is sorted array
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    cout<<isSort(arr,size,index)<<endl;

    //exclude and include pattern 

    string str = "abc";
    string output = "";
    vector<string> ans;

    printSequences(str , index ,output,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }





    return 0;
}