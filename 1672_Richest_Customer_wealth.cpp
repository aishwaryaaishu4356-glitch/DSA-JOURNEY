/*
LeetCode Problem(1672): Richest Customer WEalth
Approach: Brute Force - Nested Loops
Time Complexity:O(m*n)
Space Complexity:O(1)
 */
#include<iostream>
#include<vector>
using namespace std;
int maxWealth(vector<vector<int>>& accounts){
    int max=0;
    for(int i=0;i<accounts.size();i++){
        int sum=0;
        for(int j=0;j<accounts[i].size();j++){
            sum = sum +accounts[i][j];
        }
        if(sum>max){
            max = sum;
        }
    }
    return max;
}
int main(){
    vector<vector<int>> a={{3,4,5},{1,2,10}};
    int result = maxWealth(a);
    cout<<"Result: "<<result;
}