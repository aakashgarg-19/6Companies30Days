#include <iostream>
using namespace std;

int main(){
  int queries;
  cin>>queries;
  while(queries--){
    int a,b;
    cin>>a>>b;
    int counter=0;
    for(int n=a;n<=b;n++){
		int ele = n;
      while(ele>0){
        if (ele&1){
          counter++;
        }
        ele=ele>>1;
      }
    }
	cout<<counter<<endl;
  }
}