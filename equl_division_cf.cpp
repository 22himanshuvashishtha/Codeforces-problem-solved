#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	string s;
    cin>>s;
	int count=0 ;
	int n=s.length();
    for(int i=0;i<n-1;i++){
		if(s[i]!=s[i+1]){
			count++;
			break;
		}
	}
	if(count==0){
       cout<<"NO"<<endl;
	}
	else{
		string f=s;
		reverse(f.begin(),f.end());
		if(s!=f){
        cout<<"Ye"<<endl;
		cout<<f<<endl;
		cout<<f;
		}
		else{
			reverse(f.begin(), f.begin()+(n/2-1));
                cout << "Yes" << endl;
                cout << f << endl;
		}
	}
  }
}
