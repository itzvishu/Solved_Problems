/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n=arr.size();
        for (int i=1;i<n;i++){
            if (arr[i]-arr[i-1]==0){
                arr.erase(arr.begin()+i);
                n--;
                i--;
            }
            
        }
        return arr;
    }
};
