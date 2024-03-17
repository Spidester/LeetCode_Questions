/*2864. Maximum Odd Binary Number

You are given a binary string s that contains at least one '1'.
You have to rearrange the bits in such a way that the resulting binary number is the maximum odd binary number that can be created from this combination.
Return a string representing the maximum odd binary number that can be created from the given combination.

Note that the resulting string can have leading zeros.


Example:
Input: s = "010"
Output: "001"
Explanation: Because there is just one '1', it must be in the last position. So the answer is "001".*/

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans ("");
        int one=0, zero=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                zero++;
            }
            else{
                one++;
            }
        }
        while(one>1){
            ans += "1";
            one--;
        }
        while(zero>0){
            ans += "0";
            zero--;
        }
        if(one==1){
            ans += "1";
        }
        return ans;
    }
};