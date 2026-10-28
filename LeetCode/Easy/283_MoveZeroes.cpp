/**
 * Problem Link : https://leetcode.com/problems/move-zeroes/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        //find the first zero 
        for(int i=0;i<n;i++){
            if (nums[i]==0){
                j=i;
                break;

            }
        }
        for(int i=j+1;i<n;i++){
            if(nums [i]!=0){
                swap (nums[i],nums[j]);
                j++;
            }
        }
    }
};
