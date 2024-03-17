/*13. Roman to Integer

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Given a roman numeral, convert it to an integer.

Example:
Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.*/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> zap;
        zap['I']=1;
        zap['V']=5;
        zap['X']=10;
        zap['L']=50;
        zap['C']=100;
        zap['D']=500;
        zap['M']=1000;

        int ans=0;
        for(int i=0; i<s.size(); i++){
            if(i==s.size()-1){
                ans+=zap.at(s[i]);
            }
            else if(zap.at(s[i])>=zap.at(s[i+1])){
                ans+=zap.at(s[i]);
            }
            else{
                ans-=zap.at(s[i]);
            }
        }
        return ans;
    }
};
