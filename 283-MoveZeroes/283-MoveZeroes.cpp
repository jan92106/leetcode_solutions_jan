// Last updated: 7/10/2026, 11:00:32 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int k=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[k],nums[i]);
                k++;
            }
        }
    }
   
};