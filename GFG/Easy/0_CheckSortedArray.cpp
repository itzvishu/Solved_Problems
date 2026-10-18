/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        bool sorted=false;
        int n = arr.size();
        int count =0;
        for (int i=1;i<n;i++){
            if(arr[i]-arr[i-1]>=0){
               count++;
            }
            
            }
            if (count==n-1){
                sorted =true;
            
        }
        return sorted ;
      
    }
};
