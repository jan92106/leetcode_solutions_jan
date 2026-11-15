// Last updated: 11/15/2026, 11:28:51 AM
1class Solution {
2public:
3    int numberOfSubstrings(string s) {
4        int count[3]={0,0,0};
5        int left=0;
6        int totalsubstrings=0;
7        int n=s.length();
8        for(int right=0;right<n;right++){
9            count[s[right]-'a']++;
10            while(count[0]>0 && count[1]>0 && count[2]>0){
11                totalsubstrings += n-right;
12                count[s[left]-'a']--;
13                left++;
14            }
15        }
16        return totalsubstrings;
17    }
18}; 