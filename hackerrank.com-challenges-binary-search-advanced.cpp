// https://www.hackerrank.com/contests/launchpad-1-winter-challenge/challenges/binary-search-advanced/problem
// Binary Search - Advancedlocked
// Problem
// Submissions
// Leaderboard
// Discussions
// Given a sorted array with repeating integers. You need to find the first occurence , last occurence and count of a given key in the array. USE ONLY BINARY SEARCH. Your algorithm should run in LogN time.If element is not present print -1 -1 0.

// Input Format

// First line contains N , then N integers in next line , then key in the next line.

// Constraints

// N<=1000000

// Output Format

// 3 space separated integers for lower bound , upper bound and count/frequency of that key.

// Sample Input

// 6

// 1 2 2 2 3 4

// 2

// Sample Output

// 1 3 3

// Explanation

// First occurence of 2 is at 1. Second Occurence of 2 is at 3. Count is 3.

// Submissions: 31
// Max Score: 100
// Difficulty: Medium
// Rate This Challenge:

    
// More
 




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &nums, int target, bool first_occ) {
    int left = 0, right = nums.size() - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result = mid;
            if (first_occ){
                right = mid - 1;
            }else {
                left = mid + 1;
            }
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

int main() {
    int n,target;
    cin >> n;
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cin >> target;
    
    int first_occurrence = binary_search(nums, target, true);
    int last_occurrence = binary_search(nums, target, false);
    
    if (first_occurrence == -1) {
        cout << -1 << " " << -1 << " " << 0 << endl;
    } else {
        cout << first_occurrence << " " << last_occurrence << " " << (last_occurrence - first_occurrence + 1) << endl;
    }
    
    return 0;
}

 
