
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int a;
	cin>>a;
	string s=to_string(a);
	int rem=0;
	rem=a%7;
	if(rem==0)cout<<a<<endl;
	else{
	if(a%10>rem){
		cout<<a-rem<<endl;
	}
	else if(a%10<=rem){
       cout<<a+(7-rem)<<endl;
	}
	else if(a%10==0){
		cout<<a+(7-rem)<<endl;
	}
	}
	}
}
