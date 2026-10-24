/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-an-array/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
       int n=arr.size();
       int i=0;
       int j=n-1;
       
       while(i<j){
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           i++;
           j--;
       }
    }
};
