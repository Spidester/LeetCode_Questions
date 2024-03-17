/*33. Search in Rotated Sorted Array

There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length)
such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).
For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.

Example:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int> arr=nums;
        int pivot = getpivot(arr);
        int s=0, e=0;
        if(target>=nums[pivot] && target<=nums[nums.size()-1]){
            s=pivot;
            e=nums.size()-1;
        }
        else if(target>=nums[0]){
            e=pivot-1;
        }
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }

    int getpivot(vector<int> arr){
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(arr[mid]<=arr[e]){
                e=mid;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }
};