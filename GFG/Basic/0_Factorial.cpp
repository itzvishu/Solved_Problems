/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/factorial5739/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int factorial(int n) {
        // code here
        int fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        return fact;
    }
};
