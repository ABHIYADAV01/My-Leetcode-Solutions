#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();   
        
        //solving the edge cases so that mid+1 and mid-1 do not go out of bound
        if(n==1){
            return nums[0];
        }

        if(nums[0]!=nums[1]){
            return nums[0];
        }

        if(nums[n-1]!=nums[n-2]){
            return nums[n-1];
        }

    
        int start=1,end=n-2;

        while(start<=end){

            int mid = (start+end)/2;

            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
        //if mid is even then its next element has to be same in the first half before the single element 
        //And if mid is odd then its previous element has to be same in the first half before
        //if such a case is encountered then you can skip the left half
            else if(((mid%2)==0 && nums[mid+1]==nums[mid]) ||((mid%2)==1 && nums[mid-1]==nums[mid]) ){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
           
        }
        return -1;
    }
};