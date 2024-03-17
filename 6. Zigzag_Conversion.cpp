/*6. Zigzag Conversion

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:
string convert(string s, int numRows);

Example:
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"*/

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        string ans;
        for(int j=0; j<numRows; j++){
            int i=j, count=0;
            while(i<s.size()){
                if(count%2==0){
                    ans +=s[i];
                    if(j<numRows-1){
                        i += 2*(numRows - 1 - j);
                    }
                    else{
                        i += 2*(numRows-1);
                    }
                    count++;
                }
                else{
                    ans +=s[i];
                    if(j>0){
                        i += 2*(j);
                    }
                    else{
                        i += 2*(numRows-1);
                    }
                    count++;
                }
            }
        }
        return ans;
    }
};
