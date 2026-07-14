// Last updated: 7/14/2026, 11:32:36 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++){
           k ^=nums[i];
        }
        return k;
    }
};