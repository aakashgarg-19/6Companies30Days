// Question Link : https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/#

#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
    int mod = 1e9 + 7;
	public:
        int countDecodingDP(string digits, int n){
            int count[n+1];
            count[0] = 1;
            count[1] = 1;
            
            if(digits[0]=='0') 
                 return 0;
            for (int i = 2; i <= n; i++){
                count[i] = 0;
                if (digits[i-1] > '0')
                    count[i] = count[i-1];
                    
                if (digits[i-2] == '1' ||
                      (digits[i-2] == '2' && digits[i-1] < '7') )
                    count[i] = (count[i]%mod + count[i-2]%mod)%mod;
            }
            return count[n];
        }
		int CountWays(string str){
		    int n = str.size();
		    return countDecodingDP(str, n);
		}

};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}

// By : Aakash Garg