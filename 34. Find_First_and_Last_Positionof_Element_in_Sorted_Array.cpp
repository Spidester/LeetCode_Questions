/*34. Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.

Example:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]>=target){
                end=mid-1;
                if(nums[mid]==target){
                    ans[0]=mid;
                }
            }
            else{
                start=mid+1;
            }
        }
        start=0;
        end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]<=target){
                start=mid+1;
                if(nums[mid]==target){
                    ans[1]=mid;
                }
            }
            else{
                end=mid-1;
            }
        }
        if(ans[0]==-1 && ans[1]!=-1){
            ans[0]=ans[1];
        }
        else if(ans[0]!=-1 && ans[1]==-1){
            ans[1]=ans[0];
        }
        return ans;
    }
};
