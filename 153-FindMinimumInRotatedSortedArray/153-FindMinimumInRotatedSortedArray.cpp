// Last updated: 6/27/2026, 5:32:06 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low= 0, high= n-1;
        while(low<high){
            int mid= low +(high- low)/2;
            if(nums[mid]<nums[high]){
                high= mid;
                     
            }else{
               low= mid +1;
            }
        }
        return nums[low];
    }
};