// Question Link : https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int *findTwoElement(int *A, int n) {
        int xorAll = A[0]^1;
        int x = 0, y = 0;
        
        for(int i = 1; i<n; i++){
            xorAll = xorAll^A[i];
            xorAll = xorAll^(i+1);
        }
        
        int j = 32;
        while(j > 0){
            if(xorAll & (1<<j)){
                break;
            }
            j--;
        }
        
        for(int i = 0; i<n; i++){
            if(A[i] & (1<<j))
                x = x^A[i];
            else
                y = y^A[i];
                
                
            if((1<<j) & (i+1))
                x = x^(i+1);
            else
                y = y^(i+1);
        }
        
        int cnt_x = 0;
        for(int i = 0; i<n; i++)
            if(A[i] == x) cnt_x++;
        
        int *ans = new int[2];    
        if(cnt_x == 2) {
            ans[0] = x;
            ans[1] = y;
            return ans;
        }
        ans[0] = y;
        ans[1] = x;
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// By : Aakash Garg