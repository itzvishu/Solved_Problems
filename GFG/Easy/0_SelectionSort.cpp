/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/selection-sort/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        int n =arr.size();
        
        for(int i=0;i<n-1;i++){
            int min=i;
            for(int j=i;j<n;j++){
               
                if(arr[j]<arr[min]){
                    min=j;
                   
                    
                }
            
                
            }
            swap(arr[min],arr[i]);
            
        }
        
        
    }
};
