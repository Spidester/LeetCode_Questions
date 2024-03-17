/*1750. Minimum Length of String After Deleting Similar Ends

Given a string s consisting only of characters 'a', 'b', and 'c'. You are asked to apply the following algorithm on the string any number of times:

Pick a non-empty prefix from the string s where all the characters in the prefix are equal.
Pick a non-empty suffix from the string s where all the characters in this suffix are equal.
The prefix and the suffix should not intersect at any index.
The characters from the prefix and suffix must be the same.
Delete both the prefix and the suffix.
Return the minimum length of s after performing the above operation any number of times (possibly zero times).

Example:
Input: s = "cabaabac"
Output: 0*/

class Solution {
public:
    int minimumLength(string s) {
        if(s.size()==1){
            return 1;
        }
        while(s.front()==s.back() && s.size()>1){
            char target = s.front();
            while(!s.empty() && s.front()==target){
                s.erase(s.begin());
            }
            while(!s.empty() && s.back()==target){
                s.pop_back();
            }
            if(s.empty()){
                return 0;
            }
        }
        return s.size();
    }
};