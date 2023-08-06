#include<bits/stdc++.h>
using namespace std;
class Solution {
public:


         void combination(int i,int target,vector<int>& arr,vector<int>& temp,vector<vector<int>>& ans){

        if(i==arr.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }

        if(arr[i]<=target){
            //pick 
            temp.push_back(arr[i]);
            combination(i+1,target-arr[i],arr,temp,ans);
            
        //make sure to pop because when u modify temp and if it is not the solution u traceback to the recursion(this is because u are passing temp by reference)
       temp.pop_back(); // Backtrack: remove the current element from the combination
        }

        while(i<arr.size()-1 && arr[i]==arr[i+1]){
            i++;
        }
        //not pick
        combination(i+1,target,arr,temp,ans);

    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {

         vector<int> temp;
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());

        combination(0,target,arr,temp,ans);

        return ans;


        
    }
};