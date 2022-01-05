// Question Link : https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1#

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int i = 0; i<n; i++){
            nums[i] = nums[i]%k;
            mpp[nums[i]]++;
        }
        for(int i = 0; i<n; i++){
            if(mpp[nums[i]] > 0){
                mpp[nums[i]]--;
                if(mpp[(k-nums[i])%k] <= 0)
                    return false;
                else
                    mpp[(k-nums[i])%k]--;
            }
        }
        return true;
    }
};

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n, k; cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}

// By : Aakash Garg