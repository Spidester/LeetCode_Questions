/*9. Palindrome Number

Given an integer x, return true if x is a 
palindrome, and false otherwise.

Example:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.*/

class Solution {
public:
    bool isPalindrome(int x)
    {
        string ans = to_string(x);
        int n = ans.size();
        for(int i=0; i<n; i++){
            if(ans[i]!=ans[n-i-1]){
                return false;
            }
        }
        return true;
    }
};
