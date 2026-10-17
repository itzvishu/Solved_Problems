/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest=arr[0];
        for(int i=0;i<arr.size();i++){
            largest=max(largest,arr[i]);
        }
      return largest;  
    }
};

