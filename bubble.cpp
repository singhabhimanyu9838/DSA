#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(vector<int> &v){

    int n= v.size();
    for(int i =0 ; i<n-1;i++){
        for(int j =0 ;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

void selectionSort(vector<int> &v1){
    int n = v1.size();
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(v1[j]<v1[minIndex]){
                minIndex = j; 
            }
        }
        swap(v1[i],v1[minIndex]);
    }

    
}

int main(){

    vector<int> v = { 5,66,4,3,2,1};
    bubbleSort(v);
    print(v);

    vector<int> v1 = { 5,66,4,3,2,1};
    selectionSort(v1);
    print(v1);
    return 0;
}