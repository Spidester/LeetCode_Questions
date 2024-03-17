/*724. Find Pivot Index

Given an array of integers nums, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1.

Example:
Input: nums = [1,7,3,6,5,6]
Output: 3*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pre=0;
        int total = accumulate(nums.begin(), nums.end(), 0);
        for(int i=0; i<nums.size(); i++){
            total-=nums[i];
            if(pre==total){
                return i;
            }
            pre+=nums[i];
        }
        return -1;
    }
};