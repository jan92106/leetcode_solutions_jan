// Last updated: 6/27/2026, 5:32:08 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = int(nums.size());
        
        while(left<right) {
            int mid = (left + right)/2;
            if (nums[mid] == target) return mid;
            else if (target > nums[mid]) left= mid +1;
            else right= mid ;
        }
        if (left > 0 && nums[left -1 ] == target) {
            return left - 1;
        } else {
            return -1;
        }
    }
};