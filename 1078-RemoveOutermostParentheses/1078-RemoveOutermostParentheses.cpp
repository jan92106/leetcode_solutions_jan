// Last updated: 7/24/2026, 2:05:09 PM
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int score=0;
        for(char c:s){
            if(c=='('){
                if(score>0){
                    result+=c;
                }
                score++;
            }else{
                score--;
                if(score>0){
                    result+=c;
                }
            }
        }
        return result;
    }
    
};