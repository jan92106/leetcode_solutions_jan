// Last updated: 11/13/2026, 2:40:12 AM
1class Solution {
2public:
3    string minWindow(string s, string t) {
4        if(s.length() ==0 || t.length() ==0) return "";
5        int target_map[256]={0};
6        int required=0;
7        for(char c : t){
8            if(target_map[c]==0) required++;
9            target_map[c]++;
10        }
11        int formed=0;
12        int window_map[256]={0};
13        int left=0;
14        int min_len=INT_MAX;
15        int min_start=0;
16        for(int right=0;right<s.length();right++){
17            char c=s[right];
18            window_map[c]++;
19
20            if(target_map[c]>0 && window_map[c]==target_map[c]){
21                formed++;
22            }
23            while(left<=right && formed== required){
24                if(right-left+1<min_len){
25                    min_len= right-left+1;
26                    min_start=left;
27                }
28                char left_char=s[left];
29                window_map[left_char]--;
30                if(target_map[left_char]>0 && window_map[left_char]<target_map[left_char]){
31                    formed--;
32                }
33                left++;
34            }
35
36        }
37        return min_len==INT_MAX ? "" : s.substr(min_start,min_len);
38
39    }
40};