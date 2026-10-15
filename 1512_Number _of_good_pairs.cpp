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