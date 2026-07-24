// Last updated: 7/24/2026, 2:05:07 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        string doubled=s+s;
        return doubled.find(goal)!=string::npos;
    }
};