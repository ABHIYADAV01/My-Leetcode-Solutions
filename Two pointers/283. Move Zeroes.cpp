#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     //using two pointers
    void moveZeroes(vector<int>& nums) {

        int i = 0;

      for(int j=0;j<nums.size();j++){
          if(nums[j]!=0){
              nums[i++]=nums[j];
          }
      }

      while(i<nums.size()){
          nums[i++]=0;
      }
     
        
    }
};