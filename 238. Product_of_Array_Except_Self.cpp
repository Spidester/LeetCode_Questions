/*238. Product of Array Except Self

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.

Example:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        vector<int> pre = nums;
        vector<int> suf = nums;
        pre[0]=1;
        suf[nums.size()-1]=1;
        for(int i=1 ; i<nums.size(); i++){
            pre[i] = nums[i-1] * pre[i-1];
        }
        for(int i=nums.size()-2; i>=0; i--){
            suf[i] = nums[i+1] * suf[i+1];
        }
        for(int i=0; i<nums.size(); i++){
            ans.push_back(pre[i] * suf[i]);
        }
        return ans;
    }
};
