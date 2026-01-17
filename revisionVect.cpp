#include<iostream>
#include<vector>
#include<algorithm>
#include<list>

using namespace std;
int main(){
    vector<int> arr(5,15);
    cout << *arr.begin() << endl;
    cout << *(arr.end() - 1) << endl;
    cout << arr.size()<<endl;
    cout<<arr.empty()<<endl;
    cout<<arr.capacity()<<endl;
    arr.reserve(10);
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    cout<<arr.max_size()<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<arr.at(1)<<endl;


    list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);

    lst.remove(20);
    list<int>::iterator it = lst.begin();
   while(it != lst.end()){
        cout<< *it << " ";
        it++;
    }





    return 0;
}