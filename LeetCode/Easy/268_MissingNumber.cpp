/**
 * Problem Link : https://leetcode.com/problems/missing-number/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n=nums.size();
      sort(nums.begin(),nums.end());
      int missingNumber=n;
      if(nums[0]!=0){
        missingNumber=0;
      }
       for(int i=1;i<n;i++){
        if(nums[i]-nums[i-1]!=1){
            missingNumber=nums[i-1]+1;
        }
       } 
       return missingNumber;   
    }
};
