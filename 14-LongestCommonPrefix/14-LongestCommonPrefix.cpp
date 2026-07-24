// Last updated: 7/24/2026, 2:05:33 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last = strs[strs.size()-1];
        string result="";
        for(int i=0;i<first.length();i++){
            if(first[i]!= last[i]){
                break;
            }
            result+=first[i];
        
        }
        return result;
    }
};