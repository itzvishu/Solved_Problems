/**
 * Problem Link : https://leetcode.com/problems/rotate-array/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        
        k=k%n;//rotation is circular if we do k=n rotation we get the original array and if we do k=n+1 rotation we get the result as n+1 rotation
    vector<int>temp(k);     
    //for storing the value in the array  
    for(int j=0;j<k;j++){
    temp[j]=nums[n-k+j];
    }
    //for shifting the elements k places 
    for(int j=n-1;j>=k;j--){
        nums[j]=nums[j-k];
    
    }
        //for storing the elements at j position of n stored int temp 
            
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
           
        }
    }
};
