// Last updated: 7/14/2026, 11:32:42 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int largestsum=nums[0];
        int currentsum=0;
        for(int i=0;i<nums.size();i++){
             
            if(currentsum<0){
                currentsum=0;
            }
            currentsum +=nums[i];
            largestsum=max(largestsum, currentsum);
        }
        return largestsum;
    }
};