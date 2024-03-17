/*383. Ransom Note

Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
Each letter in magazine can only be used once in ransomNote.

Example:
Input: ransomNote = "aa", magazine = "aab"
Output: true*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count=0;
        for(int i=0; i<ransomNote.size(); i++){
            for(int j=0; j<magazine.size(); j++){
                if(ransomNote[i]==magazine[j]){
                    magazine.erase (magazine.begin()+j);
                    count++;
                    break;
                }
            }
        }
        if(count==ransomNote.size()){
            return true;
        }
        else{
            return false;
        }
    }
};
