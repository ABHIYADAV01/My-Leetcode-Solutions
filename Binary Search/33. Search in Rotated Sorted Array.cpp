#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int s = 0;
        int e = n-1;

        while(s<=e){
            int mid = (s+e)/2;

            if(nums[mid]==target){
                return mid;
            }
            else if(nums[s]<=nums[mid]){
                //2 cases
                if(nums[s]<=target && nums[mid]>=target){
                    e = mid-1;
                }
                else{
                    s = mid+1;
                }
            }
            else{
                 // 2 cases
                if(target>=nums[mid] && target<=nums[e]){
                    s = mid+1;
                }
                else{
                    e = mid-1;
                }

            }

        }
        return -1;
        
    }
};