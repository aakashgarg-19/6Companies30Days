// Question Link : https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#

#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
int main() {
	int T;
	cin>>T;
	while(T--){
		string str;
		cin>>str;
		cout<<encode(str)<<endl;
	}
	return 0;
}

string encode(string src){
    string ans = src.substr(0,1);
    char prev = src[0];
    int cnt = 1;
    for(int i = 1; i<src.size(); i++){
        if(prev == src[i]) cnt++;
        else{
            ans+=('0'+cnt);
            ans+=src[i];
            cnt = 1;
            prev = src[i];
        }
    }
    ans+=('0'+cnt);
    return ans;
}  

// By : Aakash Garg
 
