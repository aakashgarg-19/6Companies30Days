// Question Link : https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/#

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

class Solution{
public:	

	ull getNthUglyNo(int n) {
	    vector<long long int> dp(n+1);
	    dp[0] = dp[1] = 1;
	    
	    int ptr2 = 1;
	    int ptr3 = 1;
	    int ptr5 = 1;
	    
	    for(int i = 2; i<=n; i++){
	        long long ele2 = 2 * dp[ptr2];
	        long long ele3 = 3 * dp[ptr3];
	        long long ele5 = 5 * dp[ptr5];
	        
	        long long minEle = min(ele2,min(ele3,ele5));
	        
	        dp[i] = minEle;
	        
	        if(ele2 == minEle) ptr2++;
	        if(ele3 == minEle) ptr3++;
	        if(ele5 == minEle) ptr5++;
	    }
	    
	    return dp[n];
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}

// By : Aakash Garg