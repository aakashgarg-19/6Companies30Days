// Question Link : https://practice.geeksforgeeks.org/problems/decode-the-string2444/1#

#include <bits/stdc++.h>
using namespace std;

class Solution{
private:
    string decodedString(string s,int &i){
        string result = "";
        while(i < s.size() && s[i] != ']'){
            if(isdigit(s[i])){
                int k = 0;
                while(i < s.size() && isdigit(s[i])){
                    k = k*10 + (s[i]-'0');
                    i++;
                }
                i++; // For [
                string res = decodedString(s, i);
                while(k--)
                    result+=res;
                i++; // For ]
            }
            else{
                result+=s[i];
                i++;
            }
        }
        return result;
    }
public:
    string decodedString(string s){
        int i = 0;
        return decodedString(s,i);
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}

// By : Aakash Garg