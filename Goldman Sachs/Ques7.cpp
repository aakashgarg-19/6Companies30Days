// Question Link : https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1/#

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPosition(int n , int m , int k) {
        if(n == 1) return 1;
        return (m%n + k-1)==n ? m%n + k-1 : (m%n + k-1)%n;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M,K;
        
        cin>>N>>M>>K;

        Solution ob;
        cout << ob.findPosition(N,M,K) << endl;
    }
    return 0;
}

// By : Aakash Garg