#include<bits/stdc++.h>
using namespace std;

class Solution {
public:


   void helper(int l,int r,vector<int>& nums,vector<vector<int>>& ans){

       if(l==r){
           ans.push_back(nums);
           return;
       }
       else{

            for(int i=l;i<=r;i++){

               swap(nums[l],nums[i]);

               helper(l+1,r,nums,ans);

               //backtracking step
               swap(nums[l],nums[i]);
            }
       }

       
   }
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int> temp;

         helper(0,nums.size()-1,nums,ans);
         
         return ans;

    }
};