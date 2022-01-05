// Question Link : https://leetcode.com/problems/minimum-size-subarray-sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0, end = 0, ans = INT_MAX;
        long long sum = 0;
        while(end<nums.size()){
            sum+=nums[end];
            while(sum >= target){
                ans = min(ans,end-start+1);
                sum-=nums[start];
                start++;
            }
            end++;
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};

int main() {
    int t; cin >> t;
    while (t--) {
        int n,target;cin>>n>>target;
        vector<int> nums;
        for(int i = 0; i<n; i++)
            cin>>nums[i];
        Solution ob;
        cout << ob.minSubArrayLen(target, nums) << endl;
    }
    return 0;
}

// By : Aakash Garg