#include<iostream>
#include<vector>

using namespace std;

bool searchNo(vector<vector<int>>arr,int target){
    int rowSize = arr.size();
    int colSize = arr[0].size();
     for(int r=0;r<rowSize;r++){
        for(int c=0;c<colSize;c++){
            if(arr[r][c]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int>>arr(4,vector<int>(3,0));
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for(int r=0;r<rowSize;r++){
        for(int c=0;c<colSize;c++){
            cin>>arr[r][c];
        }
        cout<<endl;
    }
    int target =40;

    bool ans = searchNo(arr,target);
    if(ans==true){
        cout<<"element found";
    }

    return 0;
}