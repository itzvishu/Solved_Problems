/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-digit0316/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int reverseDigits(int n) {
        
        // Code here
        int x=0;
        // int i=1;
        int reversed_num=0;
        if(n==0){
        return 0;    
        }
        while(n>0){
            x=n%10;
            n=n/10;
            reversed_num=reversed_num*10+x;
        
            
        }
    return reversed_num;   
    }
};
