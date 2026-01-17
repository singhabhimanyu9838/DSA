#include <iostream>
using namespace std;

//odd occuring ellement 
// 1. all element occurs even number of times except one 
// 2. element repeat itself in pairs 
// 3. no pairs repeat itself , no number can occur more than 2 times in a single stretch 
// 4. find element that occur odd times

int findOddOccuringElement(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (s == e)
        {
            // yhi element odd wala element hai
            // return krdo
            return s;
        }
        int currentValue = arr[mid];
        int leftValue = -1;
        int rightValue = -1;
        if(mid-1>=0){
            leftValue = arr[mid-1];
        }
        if(mid+1 < size){
            rightValue = arr[mid+1];
        }

        // mid check

        // duplicate does not exist
        if (currentValue != leftValue && currentValue != rightValue)
        {
            return mid;
        }
        ////duplicate exist in left index
        if (currentValue == leftValue && currentValue != rightValue)
        {
            int pairStartingIndex = mid - 1;
            if (pairStartingIndex & 1)
            {
                // pair staring index is odd
                // I an standing at right part
                // move to left
                e = mid - 1;
            }
            else
            {
                // pairIndex even h
                // standing at left part
                // move to right part
                s = mid + 1;
            }
        }
        // dublicate exist in right wala index
        else if (currentValue != leftValue && currentValue == rightValue)
        {
            int pairStartingIndex = mid;

            if (pairStartingIndex & 1)
            {
                // pair staring index is odd
                // I an standing at right part
                // move to left
                e = mid - 1;
            }
            else
            {
                // pairIndex even h
                // standing at left part
                // move to right part
                s = mid + 1;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6, 4, 4, 2, 2};
    int size = 15;
    // find odd occuring element

    int ans = findOddOccuringElement(arr, size);
    cout << "ans index: " << ans << endl;
    cout<<"ans Element: "<<arr[ans]<<endl;

    return 0;
}