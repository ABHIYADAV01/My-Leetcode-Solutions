#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

   void subset(int i,vector<int>& nums,vector<int>& temp,vector<vector<int>>& ans){

       if(i>=nums.size()){
           ans.push_back(temp);
           return;
       }

       //pick
       temp.push_back(nums[i]);
       subset(i+1,nums,temp,ans);

       //just skip the duplicate elements
       while(i<nums.size()-1 && nums[i]==nums[i+1]){
           i++;
       }
       
       //not pick
       temp.pop_back();
       subset(i+1,nums,temp,ans);
       
   }



    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> temp;

        //Note: Sorting is required as the duplicate elements might not be in     sorted order
        sort(nums.begin(),nums.end());
        subset(0,nums,temp,ans);
        return ans;
        
    }
};