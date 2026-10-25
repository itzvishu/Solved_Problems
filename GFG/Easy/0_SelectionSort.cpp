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
        
        for(int i=0;i<n-1;i++){  //we need to do (n-1) times swapping
        //comparison bcz of that the internal loop will do swapping n-2 
        //times to make it sorted as last element will be sorted already
            int min=i;
           
            //stores the index of minimum element
            for(int j=i;j<n;j++){
               
                if(arr[j]<arr[min]){
                    min=j;
                   
                    
                }
            
                
            }
            //swap(arr[min],arr[i]); use this or this
            
             int temp=arr[min];
             arr[min]=arr[i];
             arr[i]=temp;
            
        }
        
        
    }
};
