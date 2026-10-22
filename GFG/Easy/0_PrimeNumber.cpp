/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/prime-number2314/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPrime(int n) {
        
        bool prime=true;
        int count =0;
        if(n<2){
            return 0;}
            
        for(int i =2;i<n;i++){
            if (n%i==0){
                count++;
                
                
            }
        }
        if(count>0){
            prime=false;
        }
        return prime;
    }
};

