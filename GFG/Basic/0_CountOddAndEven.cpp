/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/count-odd-even/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        int n=arr.size();
       int even,odd=0;
        for (int i=0;i<n;i++){
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        return {odd,even};
        
    }
};
