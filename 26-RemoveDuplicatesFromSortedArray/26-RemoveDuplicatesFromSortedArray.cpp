// Last updated: 7/10/2026, 11:00:57 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }int insert_index=1;
        for(int i=1;i<nums.size() ; i++){
            if(nums[i] != nums[insert_index -1]){
                nums[insert_index]=nums[i];
                insert_index++;
            }
        
        }
        return insert_index;
    }
    
};