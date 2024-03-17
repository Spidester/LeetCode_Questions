/*1480. Running Sum of 1d Array

Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.

Example:
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int sum = nums.size();
        vector<int> result(sum);
        for(int i=1; i<sum+1; i++){
            for(int j=0; j<i; j++){
                result[i-1] = result[i-1] + nums[j];
            }
        }
        return result;
    }
};