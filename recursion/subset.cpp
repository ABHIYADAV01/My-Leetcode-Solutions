#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     
     //Note: Passing by reference
    void subset(int i,vector<int>& nums,vector<int>& temp,vector<vector<int>>& ans){
        if(i>=nums.size()){
            ans.push_back(temp);
            return;
        }
         
        //picking 
        temp.push_back(nums[i]);
        subset(i+1,nums,temp,ans);
        
        //not picking
        temp.pop_back();
        subset(i+1,nums,temp,ans); 

    }



    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subset(0,nums,temp,ans);
        return ans;
    }
};