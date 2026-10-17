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
        int pow=1;// current max occurence every character forms a sequence of one 
        int maxpow=1;//all previous  max sequence 
        for(int i=0;i<s.length()-1;i++){
            if(s[i+1]==s[i]){//compares nxt with prvs
                pow++;
            }
            else{
                maxpow=max(pow,maxpow);
                pow=1;//every character forms sequence of atlest one 
            }
        }
        return max(pow,maxpow);
    }
};
