/*525. Contiguous Array

Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.

Example:
Input: nums = [0,1,0]
Output: 2
Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int len=0, count=0;
        unordered_map<int,int> zap;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                count--;
            }
            else{
                count++;
            }
            if(count==0){
                len=i+1;
            }
            else if(zap.find(count)!=zap.end()){
                len=max(len,i-zap[count]);
            }
            else{
                zap[count]=i;
            }
        }
        return len;
    }
};
