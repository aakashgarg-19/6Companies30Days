// Question Link : https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1

#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    string printMinNumberForPattern(string S){
        S = S[0] + S;
        int s = S.size();
        for(int i = 0; i<s; i++){
            if((i != s-1) && S[i] == 'I' && S[i+1] == 'D'){
                S[i] = 'd';
            }
        }
        string ans = "";
        int i = 0,cnt = 1;
        while(i<s){
            if(S[i] == 'I'){
                ans+=('0'+cnt);
                cnt++;
            }
            else if(S[i] == 'D'){
                int j = i;
                while(i<S.size() && S[i] == 'D'){
                    i++;
                    cnt++;
                }
                i--;
                int temp = cnt;
                temp--;
                do{
                    ans+=('0'+temp);
                    temp--;
                    j++;
                }while(j <= i);
            }
            else{
                S[i] = 'D';
                i--;
            }
            i++;
        }
        return ans;
    }
};

int main() { 
    int t;
    cin>>t;
    while(t--){
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
// By : Aakash Garg