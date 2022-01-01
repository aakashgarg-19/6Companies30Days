// Question Link : https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
         long long left = 0,right = 0,ans = 0,product = 1;
         for(int i=0; i<n; i++){
             product*=a[i];
             right++;
             if(product<k){
                 ans += (right-left);
             }
             else{
                 while(product>=k){
                     product = product/a[left];
                     left++;
                 }
                 ans += (right-left);
             }
         }
         return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// By : Aakash Garg
