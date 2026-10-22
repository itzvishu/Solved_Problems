/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-coding2452/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum =0;
    if(n==0){
        sum=0;
        
    }
    for(int i=1;i<=n;i++){
        sum=sum+i;
        
    }
    cout<<sum;
    return 0;
}

