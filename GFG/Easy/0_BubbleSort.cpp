/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/bubble-sort/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n= arr.size();
        for (int i=n-1;i>=1;i--){//decides how many times the inner 
        //loop will work this decides how many times the swapping will 
        //be done 
            for (int j=0;j<i;j++){//this loop compares for adjacent element and swap tem 
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    
                }
            }
        }
        
    }
};

// in merge sort we compare each each element with the next and if the 
// first comming element is larger than its next element then we
// will be swapping them   
