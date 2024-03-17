/*14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Example:
Input: strs = ["flower","flow","flight"]
Output: "fl"*/

class Solution
{
    public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if(strs.empty())
        {
            return "";
        }
        for(int i=0; i<strs[0].size(); i++)
        {
            for(int j=1; j<strs.size(); j++)
            {
                if(i == strs[j].size() || strs[0][i] != strs[j][i])
                {
                    return strs[0].substr(0,i);
                }
        }
    }
    return strs[0];
  }
};
