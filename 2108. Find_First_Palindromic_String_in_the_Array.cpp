/*2108. Find First Palindromic String in the Array

Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".
A string is palindromic if it reads the same forward and backward.

Example:
Input: words = ["abc","car","ada","racecar","cool"]
Output: "ada"
Explanation: The first string that is palindromic is "ada".
Note that "racecar" is also palindromic, but it is not the first.*/

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans;
        for(int i=0; i<words.size(); i++){
            int n = words[i].size();
            for(int j=0; j<n; j++){
                if(words[i][j] != words[i][n-j-1]){
                    break;
                }
                else if(j==(n-1)){
                    ans = words[i];
                    return ans;
                }
            }
        }
        return ans;
    }
};
