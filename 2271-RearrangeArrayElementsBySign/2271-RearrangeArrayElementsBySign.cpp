// Last updated: 7/24/2026, 2:05:12 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int>result(n,0);
        int posindex=0;
        int negindex=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                result[posindex]=nums[i];
                posindex+=2;
            }else{
                result[negindex]=nums[i];
                negindex+=2;
            }
        }
        return result;
    }
};