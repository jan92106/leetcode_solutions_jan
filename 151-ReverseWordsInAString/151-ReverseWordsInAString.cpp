// Last updated: 7/24/2026, 2:05:21 PM
class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string result="";
        int i=n-1;
        while(i>=0){
            while(i>=0 && s[i]==' '){
                i--;
            }
            if(i<0)break;
            int end=i;
            while(i>=0 && s[i] != ' '){
                i--;
            }
            if(!result.empty()){
                result+= " ";
            }
            result+= s.substr(i+1,end-i);
            
        }
        return result;

    }
};