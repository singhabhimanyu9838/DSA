#include<iostream>
#include<vector>
using namespace std;

// void fun(int a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<"Array element are"<<endl;
//         cout<<a[i]<<endl;
//     }
// }

void print(vector<int> v){
    int size =v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;

        //    same as above

        // cout<<v.at(i)<<endl;
        
    }
    // cout<<size;
}

// or

void print2(vector<int> v){
    cout<<"printing vector method 2"<<endl;
    for(auto it:v){
        cout<<it<<endl;
    }
}


int main(){

    //static memory allocation of array

    // int arr[5] = {1,2,3,4,5}; 
    // fun(arr,5);

    //Dynamic memory allocation of array

    // int n;
    // cin>>n;
    // int *arr = new int[n];//each element would be 0,or garbage value 
    // for(int i=0;i<n;i++){
    //     int data;
    //     cin>>data;
    //     arr[i]=data;
    // }
    // fun(arr,n);


                     /*VECTOR*/

    vector<int> v;//it also the array

    // insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    print(v);
    cout<<endl;

    //delete or pop
    v.pop_back();
    print(v);

    //I want ot clear the vector

    v.clear();
    print(v);
    cout<<endl;
    v.push_back(10);
    print(v);

// while(1){
//     int d;
//     cin>>d;
//     v.push_back(d);
//     cout<<"capacity"<<v.capacity()<<" size :"<<v.size()<<endl;
// }


// vector<int> arr; //default size is 0 with no data , 0 size
// vector<int> arr1(5,10);//size is 5 with all element 10
// print(arr1);
// cout<<endl;
// vector<int>arr2 = {1,2,3,4,5};
// // vector<int>arr2{1,2,3,4,5};
// print(arr2);

// vector<int>arr3(arr2);//copy of arr2
// print(arr3);


/*Charater type of vector*/

  vector<char> v1;
    v1.push_back('A');
    v1.push_back('B');
    v1.push_back('C');

 cout<<"first element : "<<v1[0]<<endl; //or
 cout<<"first element : "<<v1.front()<<endl;

 cout<<"last element : "<<v1[v1.size()-1]<<endl; //or
 cout<<"last element : "<<v1.back()<<endl;


 vector<int> v2;
    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(40);
    print2(v2);


    return 0;
}