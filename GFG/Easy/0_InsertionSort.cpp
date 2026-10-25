/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/insertion-sort/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n= arr.size();
        for (int i=1;i<n;i++){
            int j=i;
            while(j>0 && arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                j--;
            }
        }
            
        }
};
