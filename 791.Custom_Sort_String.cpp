/*791. Custom Sort String

You are given two strings order and s. All the characters of order are unique and were sorted in some custom order previously.
Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.
Return any permutation of s that satisfies this property.

Example:
Input:  order = "cba", s = "abcd" 
Output:  "cbad" 
Explanation: "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a".
Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.*/

class Solution {
public:
    string customSortString(string order, string s) {
        string ans ("");
        for(int i=0; i<order.size(); i++){
            for(int j=0; j<s.size(); j++){
                if(order[i]==s[j]){
                    ans+=s[j];
                    s.erase(s.begin()+j);
                    j--;
                }
            }
        }
        ans+=s;
        return ans;
    }
};