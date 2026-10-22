/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool armstrongNumber(int n) {
        int num=n;
        bool z=false; 
        int x=0;
        int cubes_sum=0;
        if (n==0){
            z=true;
        }
        
        while(n>0){
            x=n%10;
            n=n/10;
            cubes_sum=cubes_sum+x*x*x;
            
        } 
        if(cubes_sum==num){
            z=true;
        }
        return z;
    }
};
