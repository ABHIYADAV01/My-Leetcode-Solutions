#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    //finding the pivot
    int findPeakElement(vector<int>& nums) {
        int pivot;
        int n = nums.size();
        int s = 0;
        int e = n-1;

        while(s<e){

            int mid=(s+e)/2;

            if(nums[mid]>nums[mid+1]){
                 e = mid;
            }
            else{
                s = mid+1;
            }
          
        }
          return s;  
    }
};