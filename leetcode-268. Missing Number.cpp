// // https://leetcode.com/problems/missing-number/description/
 
//  268. Missing Number
// Easy
// 8.6K
// 3K
// Companies
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

// Example 1:

// Input: nums = [3,0,1]
// Output: 2
// Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
// Example 2:

// Input: nums = [0,1]
// Output: 2
// Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
// Example 3:

// Input: nums = [9,6,4,2,3,5,7,0,1]
// Output: 8
// Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
 

// Constraints:

// n == nums.length
// 1 <= n <= 104
// 0 <= nums[i] <= n
// All the numbers of nums are unique.
 

// Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?



class Solution {
public:
    int sum(int n){
        return (n == 0) ? 0 : sum(n - 1) + n;
    }
    int missingNumber(vector<int>& nums) {
        int total = sum(nums.size());
        int arr_sum =0;
        for(int i : nums){
            arr_sum += i;
        }

        return total - arr_sum;
    }

    int missingNumber(vector<int>& nums) {
        int ans = nums.size();
        for(int i =0; i<nums.size(); i++){
            ans ^= (nums[i]^i);
        }
        return ans;
        
    }
};
