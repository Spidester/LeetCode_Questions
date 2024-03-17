/*3. Longest Substring Without Repeating Characters

Given a string s, find the length of the longest 
substring without repeating characters.

Example:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        vector<int> lastIndex(128, -1);
        
        for (int i = 0, j = 0; j < s.size(); j++) {
            i = max(i, lastIndex[s[j]] + 1);
            ans = max(ans, j - i + 1);
            lastIndex[s[j]] = j;
        }
        
        return ans;
    }
};