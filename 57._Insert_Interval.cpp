/*57. Insert Interval

You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti.
You are also given an interval newInterval = [start, end] that represents the start and end of another interval.
Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).
Return intervals after the insertion.
Note that you don't need to modify intervals in-place. You can make a new array and return it.

Example:
Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
Output: [[1,5],[6,9]]*/

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr, vector<int>& n) {
        vector<vector<int>> ans;
        int i = 0;
        
        while (i<arr.size() && arr[i][1]<n[0]){
            ans.push_back(arr[i]);
            i++;
        }
    
        while (i<arr.size() && arr[i][0]<=n[1]){
            n[0]=min(n[0], arr[i][0]);
            n[1]=max(n[1], arr[i][1]);
            i++;
        }
        ans.push_back(n);
        
        while (i<arr.size()) {
            ans.push_back(arr[i]);
            i++;
        }
        
        return ans;
    }
};