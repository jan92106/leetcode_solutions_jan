// Last updated: 7/10/2026, 11:00:38 PM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k=k%n;
        reverse(nums.end()-k, nums.end());
        reverse(nums.begin(), nums.end()-k);
        reverse(nums.begin(),nums.end());

      
    }
};