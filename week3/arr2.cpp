#include <iostream>
#include <algorithm>
using namespace std;

int findOdd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            return arr[i];
        }
    }
}

// or

int findUniqueno(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

void printAllthePair(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ") ";
        }
        cout << endl;
    }
}

void findingSumtarget(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "(" << arr[i] << "," << arr[j] << ") ";
            }
        }
        // cout << endl;
    }
}

// or

pair<int, int> checkTwoSum(int arr[], int n, int target)
{
    // Asumming (-1,-1) is the default value
    pair<int, int> ans1 = make_pair(-1, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans1.first = arr[i];
                ans1.second = arr[j];
                return ans1;
            }
        }
    }
}


void uniqueTriplet(int arr[], int n){

    //Space Complexity is O(1) and Time Complexity is O(n^3)

    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(arr[i]==arr[j] || arr[i]==arr[k] || arr[j]==arr[k]){
                    continue;
                }
                else{

                    count++;
                    cout<<count<<"."<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                }
            }
        }
    }
}

bool checkThreeSum(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                }
            }
        }
    }
}


void rotateArray(int arr[], int size, int shift){
    int finalShift = shift%size;
    if(finalShift==0){
        //no need to do anything
        return ;
    }

    //step1: copy last finalShift elements into a temp array

    int temp[1000];
    int index =0;
    for(int i=size-finalShift;i<size;i++){
        temp[index] = arr[i];
        index++;
    }
    //step2: shift array element by finalShift places

    for(int i=size-1;i>=finalShift;i--){
        if(i-shift>=0){
            arr[i] = arr[i-finalShift]; 
        }
    }
    //step3: copy temp element  into the original array
    for(int i=0;i<finalShift;i++){
        arr[i] = temp[i];
    }
}
int main()
{

    int arr[] = {2, 5, 2, 5, 7, 1, 7};
    findOdd(arr, 7);
    int single = findOdd(arr, 7);
    cout << single << endl;
    // or
    int ans = findUniqueno(arr, 7);
    cout << ans << endl;

    // Sorting to 0's and 1's

    int arr1[] = {0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 1};
    int zeroCounting = 0;
    int oneCounting = 0;
    for (int i = 0; i < 12; i++)
    {
        if (arr1[i] == 0)
        {
            zeroCounting++;
        }
        else
        {
            oneCounting++;
        }
    }
    for (int i = 0; i < 12; i++)
    {
        if (i < zeroCounting)
        {
            arr1[i] = 0;
            // cout<<"0";
        }
        else
        {
            arr1[i] = 1;
            // cout<<"1";
        }
    }
    // or

    fill(arr1, arr1 + zeroCounting, 0);
    fill(arr1 + zeroCounting, arr1 + 12, 1);

    // or using sort

    sort(arr1, arr1 + 12);

    // printing the array
    for (int i = 0; i < 12; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int arr2[] = {10, 20, 30, 40};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    // print All the pairs of any array

    printAllthePair(arr2, n);
    cout << endl;

    // print upper half

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "(" << arr2[i] << "," << arr2[j] << ") ";
        }
        cout << endl;
    }
    cout << endl;

    // print lower half

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "(" << arr2[i] << "," << arr2[j] << ") ";
        }
        cout << endl;
    }
    cout << endl;

    // printing above the lower diagonal

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            cout << "(" << arr2[i] << "," << arr2[j] << ") ";
        }
        cout << endl;
    }
    //
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << "(" << arr2[i] << "," << arr2[j] << ") ";
        }
        cout << endl;
    }
    cout << endl;
    //
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {

            cout << "(" << arr2[i] << "," << arr2[j] << ") ";
        }
        cout << endl;
    }
    cout << endl;
    //
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {

            cout << "(" << arr2[i] << "," << arr2[j] << ") ";
        }
        cout << endl;
    }
    cout << endl;

    // Finding the target by suming of two array values

    int myTarget = 35;
    int arr3[] = {20, 15, 5, 10, 25, 22, 31, 3};
    int m = sizeof(arr3) / sizeof(arr3[0]);

    findingSumtarget(arr3, m, myTarget);
    cout << endl;

    // or  finding the pair to find the desire values by using the pair method

    pair<int, int> ans1 = checkTwoSum(arr3, m, myTarget);
    if (ans1.first == -1 && ans1.second == -1)
    {
        cout << "Pair not found" << endl;
    }
    else
    {
        cout << ans1.first << " " << ans1.second << endl;
    }

    //to finding the unique triplet of  the arrray 

    int arr4[] = {1, 4, 5, 8};
    int x = sizeof(arr4) / sizeof(arr4[0]);
    uniqueTriplet(arr4,x);

    int nTarget = 14;
    checkThreeSum(arr4,x,nTarget);

    //Shifting the array by n

    int arr5[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr5)/sizeof(arr5[0]);
    //cyclically shifting the array by 2 places
    int shift = 3;

     cout<<"before the shifting"<<endl;
     for(int i=0;i<size;i++){
       
        cout<<arr5[i]<<" ";
    }
    cout<<endl;


    rotateArray(arr5,size,shift);

    //printing the array
          cout<<"after the shifting"<<endl;
    for(int i=0;i<size;i++){
  
        cout<<arr5[i]<<" ";
    }




    return 0;
}