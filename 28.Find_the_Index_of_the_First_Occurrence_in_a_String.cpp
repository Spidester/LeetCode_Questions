/*28. Find the Index of the First Occurrence in a String

Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example:
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.*/

class Solution {
public:
    int strStr(string haystack, string needle){
        for(int i=0; i<haystack.size(); i++){
            if(haystack.substr(i, needle.length())==needle){
                return i;
            }
        }
        return -1;
    }
};