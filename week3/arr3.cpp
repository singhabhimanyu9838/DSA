#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;


bool searching(int arr2[3][4],int row2,int col2,int search){
     for(int r=0;r<row2;r++){
        for(int c=0;c<col2;c++){
            if(arr2[r][c]==search){
                return true;
            }
        }
    }
    return false;
}

int minSearch(int arr[][4],int row,int col){
    int minimum = INT8_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<minimum){
                minimum=arr[i][j];
            }
        }
    }
    return minimum;

    //overall T.C -> O(row*col)
    //overall S.C -> O(1) space

}

void sumRow(int arr[][4],int row ,int col){
    for(int i =0 ;i<row;i++){
        int sum =0;
        for(int j=0;j<col;j++){
            sum = sum + arr[i][j];
        }
        cout<<"summation of "<< i <<" row = " <<sum<<endl;
    }
}

void sumCol(int arr[][4],int row ,int col){
    for(int i =0 ;i<col;i++){
        int sum =0;
        for(int j=0;j<row;j++){
            sum = sum + arr[j][i];
        }
        cout<<"summation of "<< i <<" col = " <<sum<<endl;
    }
}

void diaSum(int arr1[][3],int row ,int col){
    int sum =0 ;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                sum=sum+arr1[i][j];
            }
        }
    }
    cout<<"Sumation of diagonal element in the arrray is "<<sum<<endl;
}

void diaSum1(int arr1[][3],int row ,int col){
    int sum =0 ;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(j==col-(i+1)){
                sum=sum+arr1[i][j];
            }
        }
    }
    cout<<"Sumation of another diagonal element in the arrray is "<<sum<<endl;
}

void transpose(int arr[][3], int row, int col){
    int transArr[3][3];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           transArr[j][i] = arr[i][j];
        }
    }
    cout<<"new array after transpose of array"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout<<transArr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose1(int arr[][3], int row, int col){
   
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
           swap(arr[j][i],arr[i][j]);
        }
    }
    cout<<"using single array"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    // declaring 2 D array

    //   int arr[4][3];

    // initialise
    int arr[3][2] = {
        {10, 20},
        {30, 40},
        {50, 60}};
    // or
    //  int arr[3][2] = { 10,20,30,40,50,60};

    // cout<<arr[1][0]<<endl;

    // traverse the entire array
    int rowSize = 3;
    int colSize = 2;
    for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
    {
        for (int colIndex = 0; colIndex < colSize; colIndex++)
        {
            cout << arr[rowIndex][colIndex] << " ";
        }
        cout << endl;
    }

    // Column wise only when when it squre 2D array

    // for(int r=0;r<rowSize;r++){
    //     for(int c =0 ;c<colSize ;c++){
    //         cout<<arr[c][r]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Column wise
    for (int c = 0; c < colSize; c++)
    {
        for (int r = 0; r < rowSize; r++)
        {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }

    // fill methodd in 2D Array

    fill(&arr[0][0], &arr[0][0] + 4, 5);
    cout << arr[1][1];
    cout << endl;

    // diagonal matrix -> Squre matrix
    int arr1[3][3] = {
        {10, 20, 70},
        {30, 40, 80},
        {50, 60, 90}};
    int row = 3;
    int col = 3;
    // for(int r =0;r<row;r++){
    //     for(int c=0;c<col;c++){
    //         if(r==c){
    //             cout<<arr1[r][c]<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    /*or*/

    for (int r = 0; r < row; r++)
    {
        cout << arr1[r][r] << " " << endl;
    }

    // Another Diagonal element
    int l = 0;
    for (int r = row - 1; r >= 0; r--)
    {
        cout << arr1[l][r] << endl;
        l++;
    }

    //QUESTION PRACTICE

    // 1. Searching an element 

    int arr2[3][4]={
        {10,20,30,40},
        {50,55,60,65},
        {70,75,80,85}
    };
    int row2=3;
    int col2=4;
    int search =75;


    int afterSearch = searching(arr2,row2,col2,search);
   
    if(afterSearch == 1){
        cout<<search<<" elemnt present in arr2"<<endl;
    }else{
        cout<<"not found in the arr2";
    }

    //2. searching the minimum value

    int minAns = minSearch(arr2,row2,col2);
    cout<<"Minimum value in arrray is : "<<minAns<<endl;

    //3. Summation of each row and column wise

    sumRow(arr2,row2,col2);
    cout<<endl;
    sumCol(arr2,row2,col2);

    //4. diagonal sum in arr1 because the diagonal is in the square array

    diaSum(arr1,row,col);

    //5. another diagonal summation

    diaSum1(arr1,row,col);

    //6. transpose of the arr1
    //tranpose means jo row me tha vo column me aa jayega aur jo column me tha vo row me aa jayega

    transpose(arr1, row, col);

    // or without using another array

    transpose1(arr1,row,col);

    


    

    return 0;
}