/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
                int n1=a.size();
                int n2=b.size();
                set<int>unionSet; //creating a set 
                vector<int>unionArray; //creating a vector to return the final aswers
                for(int i=0;i<n1;i++){
                    unionSet.insert(a[i]);
                }
                for(int i=0;i<n2;i++){
                    unionSet.insert(b[i]);
                }


                   for (auto it : unionSet) {
                    unionArray.push_back(it);

                }
               // sort unionArray(begin(),end());not needed as the result is alredy sorted and returned in the vector
                return unionArray;
        
    }
};
