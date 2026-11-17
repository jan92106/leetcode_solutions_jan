// Last updated: 11/18/2026, 5:10:06 AM
1class Solution {
2private:
3    int atmost(vector<int>& nums,int target){
4        if(target<0)return 0;
5        int left=0;
6        int currentsum=0;
7        int count_subarray=0;
8        for(int right=0;right<nums.size();right++){
9            currentsum += nums[right];
10            while(currentsum> target){
11                currentsum -=nums[left];
12                left++;
13            }
14            count_subarray += (right -left+1);
15
16            
17        }
18        return count_subarray;
19    }
20public:
21    int numSubarraysWithSum(vector<int>& nums, int goal) {
22        return atmost(nums,goal)-atmost(nums,goal-1);
23    }
24};