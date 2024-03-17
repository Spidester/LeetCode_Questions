/*2540. Minimum Common Value

Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the minimum integer common to both arrays. If there is no common integer amongst nums1 and nums2, return -1.

Note that an integer is said to be common to nums1 and nums2 if both arrays have at least one occurrence of that integer.

Example:
Input: nums1 = [1,2,3], nums2 = [2,4]
Output: 2
Explanation: The smallest element common to both arrays is 2, so we return 2.*/

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int ans = INT_MAX;
        unordered_set <int> numset(nums1.begin(), nums1.end());
        for(int i=0; i<nums2.size(); i++){
            if(numset.count(nums2[i])){
                ans = min(ans, nums2[i]);
            }
        }
        if(ans!=INT_MAX){
            return ans;
        }
        else{
            return -1;
        }
    }
};
