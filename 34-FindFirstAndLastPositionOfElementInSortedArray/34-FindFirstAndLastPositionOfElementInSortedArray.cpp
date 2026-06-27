// Last updated: 6/27/2026, 5:32:13 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int n= nums.size();
       vector<int> ans(2,-1);

       if (n==0) return ans; 
       int left =0 , right= n-1;
       while (left<= right) {
        int mid = left +(right- left)/2;
        if (nums[mid]== target) {
            ans[0] = mid;
            right = mid-1;
        }
        else if (nums[mid]> target) {
            right = mid -1;
        }
        else {
            left= mid +1;
        }
       }
       if (ans[0]==-1) return ans;

       left = 0, right= n-1;
       while (left<= right) {
        int mid = left +(right- left)/2;

        if(nums[mid] == target){
            ans[1]= mid;
            left= mid+1;
        }
        else if (nums[mid]< target){
            left = mid +1;
        }
        else {
            right= mid -1;
        }
       }
       return ans;
    }
};