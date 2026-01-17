#include<iostream>
#include<vector>
#include<set>
using namespace std;
int arrayNesting(vector<int>& nums) {
    int n = nums.size();
  std::set<int> st;
   int j=0;
   for(int i=0;i<n;i++){
    if(j<n){
    st.insert(nums[j]);
    j=nums[j];
    }

   }
   int m = st.size();
   return m; 
}


int main(){
    vector<int>nums = {0,1,2};
    cout<<arrayNesting(nums);


    return 0;
}