// https://leetcode.com/problems/subarray-sum-equals-k/description/

// 560. Subarray Sum Equals K
// Medium
// 17.1K
// 501
// Companies
// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

 

// Example 1:

// Input: nums = [1,1,1], k = 2
// Output: 2
// Example 2:

// Input: nums = [1,2,3], k = 3
// Output: 2
 

// Constraints:

// 1 <= nums.length <= 2 * 104
// -1000 <= nums[i] <= 1000
// -107 <= k <= 107

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         // 1- make map 
         map<int,int> mp;

         // 2- create prefix 
         int prefix = 0, subArrNum= 0;
        //corner case when prefix equal zero 
         mp[prefix]++;
         // 3- loop through the array 
         for(int i=0; i<nums.size(); i++)
         {
             // 4- increase the prefix
             prefix += nums[i];
             // 5- calc the cutting part of the array let it be X which is also prefix 
             int x  = prefix - k;
             // 6- ask the q, does this prefix exist before and how often
             // check if this prefix exist before 
             if(mp.count(x)){
                 // the cut-part of array (x) exist before 
                 subArrNum += mp[x];
             }

             // 9- add to the map the prefix and the new sun array number occurrence
             mp[prefix]++; 

         }

         return subArrNum;
    }
};
