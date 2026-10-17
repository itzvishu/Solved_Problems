/**
 * Problem Link : https://leetcode.com/problems/consecutive-characters/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int pow=0;
        int maxpow=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i+1]==s[i]){
                pow++;
            }
            else{
                maxpow=max(pow,maxpow);
                pow=1;
            }
        }
        return max(pow,maxpow);
    }
};
