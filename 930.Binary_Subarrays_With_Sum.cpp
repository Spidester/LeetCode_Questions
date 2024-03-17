/*930. Binary Subarrays With Sum

Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.
A subarray is a contiguous part of the array.

Example:
Input: nums = [1,0,1,0,1], goal = 2
Output: 4
Explanation: The 4 subarrays are bolded and underlined below:
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]*/

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> zap;
        int count=0, sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum==goal){
                count++;
            }
            if(zap.find(sum-goal) != zap.end()){
                count+=zap[sum-goal];
            }
            zap[sum]++;
        }
        return count;
    }
};