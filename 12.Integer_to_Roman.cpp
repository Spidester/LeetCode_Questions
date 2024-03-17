/*12. Integer to Roman

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Given an integer, convert it to a roman numeral.

Example:
Input: num = 1994
Output: "MCMXCIV"
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.*/

class Solution {
public:
    string intToRoman(int num)
    {
        string ans;
        string a[]= {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int b[]= {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        int c,d;
        
        for(c=12; c>=0; c--)
        {
            d= num/b[c];
            num= num%b[c];
            
            for(d=d; d>0; d--)
            {
                ans= ans+ a[c];
            }
        }
        return (ans);
    }
    
};