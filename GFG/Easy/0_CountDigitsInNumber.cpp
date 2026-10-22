/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/count-total-digits-in-a-number/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countDigits(int n) {
        
        int digitsum=0;
        if (n==0){
            digitsum=1;
        }
        while(n>0){
            
            n=n/10;
            digitsum++;
            
        }
        
        return digitsum;
    }
};
