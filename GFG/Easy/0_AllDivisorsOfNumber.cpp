/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/all-divisors-of-a-number/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> getDivisors(int n) {
        // code here
        vector<int>ans;
        for(int i=1;i*i<=n;i++){
            if (n%i==0){
                ans.push_back(i);
            if (i != n / i) {
                    ans.push_back(n / i);
                }
            }
             
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
