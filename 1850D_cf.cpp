#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		vector<int>v(a);
		for(int i=0;i<a;i++){
			cin>>v[i];
		}
		int count=1;
		int ans=1;
		sort(v.begin(),v.end());
		for(int i=1;i<a;i++){
			if(v[i]-v[i-1]>b){
                count=1;
			}
			else{
				count++;
			}
		 ans = max(ans,count);
	    }
		  cout<<a-ans<<endl;
        }
}
