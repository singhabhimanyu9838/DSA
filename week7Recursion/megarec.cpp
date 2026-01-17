#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//leetcode 1981
int solve(vector<vector<int>>&mat,int target ,int sum , int row){
    //base case
    if(row == static_cast<int>(mat.size())){
        return abs(target - sum);
    }
    int ans = INT_MAX;
    for(int col =0; col<(int)mat[row].size();col++){
        int reAns = solve(mat , target , sum + mat[row][col],row+1);
        ans = min(ans,reAns);
    }
    return ans;
}


//leetcode 55. Jump Game
bool solve1(vector<int>&nums , int i){
    if(i==static_cast<int>(nums.size())-1)return true;
    if(i >= static_cast<int>(nums.size()))return false;

    bool reAns = false;
    for(int step =1;step<=nums[i];step++){
        reAns = reAns || solve1(nums,step+i);
    }
    return reAns;
}


//leetcode 45. Jump Game II
void solve2(vector<int>&nums , int i , int &ans , int step){
    if(i == nums.size()-1){
        ans = min(step , ans);
        return ;
    }
    if(i >= nums.size())return ;
    for(int jump = 1 ; jump<= nums[i];jump++){
        solve2(nums,i+jump,ans,step +1);
    }
}



//leetcode 120. Triangle
int solve3(vector<vector<int>>&triangle,int row ,int col){
    if(row == triangle.size()-1){
        return triangle[row][col];
    }
    int down = triangle[row][col] + solve3(triangle , row + 1 ,col);
    int plus = triangle[row][col] + solve3(triangle , row + 1 , col +1);
    return min(down , plus);
}


int main(){

    //leetcode 1981
    vector<vector<int>>mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int target = 13;
    int row =0,sum =0;
    cout<<"Minimum difference: "<< solve(mat,target,sum , row )<<endl;


    //leetcode 55. Jump Game
    vector<int>nums = { 2,3,1,1,4};
    cout<<"Is reach to final index : " <<solve1(nums ,0)<<endl;


    //leetcode 45. Jump Game II
    int ans1 = INT_MAX;
    solve2(nums ,0,ans1,0 );
    cout<<"minimum step: " << ans1<<endl;

    
    //leetcode 120. Triangle

    vector<vector<int>>triangle = {
        {2},
        {3,4},
        {6,5,7},
        {4,1,8,3}
    };
    cout<< "minimum path : " << solve3(triangle,0,0)<<endl;

    return 0;
}