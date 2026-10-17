/**
 * Problem Link : https://leetcode.com/problems/max-consecutive-ones/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int count =0;
      int z=0;
      for(int i=0;i<nums.size();i++){
        if (nums[i]==1){
            count++;}
        else{
             z=max(z,count);
            count=0; }
        }
      
    return max(z,count);
    }
};
