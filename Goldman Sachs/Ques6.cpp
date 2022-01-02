// Question Link : https://leetcode.com/problems/greatest-common-divisor-of-strings/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    if (a == b)
        return a;
  
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1 )? str1.substr(0,gcd(str1.size(),str2.size())): "";
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1,str2;
        cin >> str1 >> str2;
        Solution ob;
        auto ans = ob.gcdOfStrings(str1,str2);
        cout << ans << "\n";
    }
    return 0;
}

// By : Aakash Garg