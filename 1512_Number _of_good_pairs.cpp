/*
LeetCode Problem(1512): Number of Good Pairs
Approach: Brute Force - Nested Loops
Time Complexity:O(n^2)
Space Complexity:O(1)
*/
#include<iostream>
#include<vector>
using namespace std;
int numIdenticalPairs(vector<int>& nums){
    int count=0;
    for(int i=0;i<(nums.size()-1);i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> a={1,2,3,1,1,3};
    int result = numIdenticalPairs(a);
    cout<<"Result: "<<result;
    return 0;
}