#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int start = 0, end = nums.size() - 1;
        vector<int> ans(2, -1);

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                ans[0] = mid;
                end = mid - 1;  // Search left side for the lower bound
            } else if (target < nums[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        start = 0, end = nums.size() - 1; // Reset the pointers

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                ans[1] = mid;
                start = mid + 1;  // Search right side for the upper bound
            } else if (target < nums[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
};