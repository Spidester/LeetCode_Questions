/*4. Median of Two Sorted Arrays

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).

Example:
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        
        if(nums1.size()%2==0){
            double a,b;
            a=nums1[nums1.size()/2];
            b=nums1[(nums1.size()-1)/2];
            return (a+b)/2;
        }
        else{
            return (nums1[(nums1.size()-1)/2]);
        }
    }
};
