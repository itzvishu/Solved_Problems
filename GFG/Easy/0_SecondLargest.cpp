/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/second-largest3735/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest=arr[0];
        int second_largest =-1;
        for (int i=0;i<arr.size();i++){
            largest=max(largest,arr[i]);
                
            }
            
        for (int j=0;j<arr.size();j++){
            if(largest-arr[j]>0){
                 second_largest=max(second_largest,arr[j]);
                }
            }
           return second_largest; 
    }
};
