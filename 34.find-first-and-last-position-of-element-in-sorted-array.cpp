/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    int leftmost(vector<int>& arr, int n, int k) {
        int l=0,h=n-1;
        int ans = -1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==k){
                ans=mid;
                h=mid-1;
            } 
            else if(arr[mid]<k){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
    int rightmost(vector<int>& arr, int n, int k) {
        int l=0,h=n-1;
        int ans=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==k){
                ans=mid;
                l=mid+1;
            } 
            else if(arr[mid]<k){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int k=leftmost(nums,nums.size(),target);
        int n=rightmost(nums,nums.size(),target);
        return {k,n};
    }
};
// @lc code=end

