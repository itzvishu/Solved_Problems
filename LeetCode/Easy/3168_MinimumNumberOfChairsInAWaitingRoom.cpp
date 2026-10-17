/**
 * Problem Link : https://leetcode.com/problems/minimum-number-of-chairs-in-a-waiting-room/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumChairs(string s) {
        int E=0;
        int L =0;
        int req_chair=0;

        for (int i=0;i<s.length();i++){
            if(s[i]=='E'){
                E++;
            }
            else{
                

                L++;
               
            }
        req_chair=max(req_chair,E-L);
        //if (E - L > req_chair) {req_chair = E - L;}

        }
        return (req_chair);
    }
};
