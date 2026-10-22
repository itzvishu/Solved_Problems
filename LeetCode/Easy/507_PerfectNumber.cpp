/**
 * Problem Link : https://leetcode.com/problems/perfect-number/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        bool perfect = false;
        for (int i=1;i<num;i++){
            if (num%i==0){
                sum=sum+i;
            }
        } 
        if (num==sum){
            perfect=true;
        }
        return perfect;
    }
};
