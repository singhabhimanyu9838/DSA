#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printDouble(int a)
{
    cout << 2 * a << " ";
}

bool checkEven(int a)
{
    return a % 2 == 0;
}
int main()
{
    vector<int> arr(6);
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 10;
    arr[3] = 31;
    arr[4] = 50;
    arr[5] = 67;

    // for_each(arr.begin(),arr.end(),printDouble);

    //    auto it = find_if(arr.begin(),arr.end(),checkEven);
    //     cout<<*it<<endl;

    //     int target = 40;
    //    auto it =  find(arr.begin(),arr.end(),target);
    //    cout<<*it<<endl;

    // int target =11;
    // int ans = count(arr.begin(),arr.end(),target);
    // cout<<ans<<endl;

    // int ans = count_if(arr.begin(), arr.end(), checkEven);
    // cout << ans << endl;

    // sort(arr.begin(),arr.end());
    // for(int a : arr){
    //     cout<<a<<' ';
    // }

    // reverse(arr.begin(),arr.end());
    // for(int a : arr){
    //     cout<<a<<' ';
    // }

    // before shifting
    // cout << " before shifting" << endl;
    // for (int a : arr)
    // {
    //     cout << a << ' ';
    // }
    // cout << endl;
    // rotate(arr.begin(), arr.begin() + 3, arr.end());
    // // after shifting
    // cout << " After shifting" << endl;
    // for (int a : arr)
    // {
    //     cout << a << ' ';
    // }
 //HW => left rotate


    // auto it = unique(arr.begin(),arr.end());
    // // it iterator ke pahle saare unique element hai 
    // // it ke baad saare duplicate element hai
    // arr.erase(it , arr.end());
    // for( int a : arr){
    //     cout<<a<<" ";
    // }

    auto it = partition(arr.begin(),arr.end(),checkEven);
    for(int a : arr){
        cout << a << " ";
    }


    
    return 0;
}
