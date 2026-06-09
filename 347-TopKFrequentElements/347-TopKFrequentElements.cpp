// Last updated: 6/9/2026, 4:59:51 PM
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int n : nums) {
            counts[n]++;
        }

        vector<pair<int, int>> v;
        // REMOVE the semicolon after the loop!
        for (auto& it : counts) { 
            v.push_back({it.second, it.first}); 
        }

        // Keep all this INSIDE the function
        sort(v.rbegin(), v.rend());

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(v[i].second);
        }
        
        return result; // Don't forget to return!
    } // Function ends HERE
};