#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int ans1=0;
      int ans2=0;
      int que=n/3;
      int rem=n%3;
      ans1=ans2=que;
      if(rem==1){
        ans1=ans1+1;
      }
      else if(rem==2){
        ans2=ans2+1;
      }
      cout<<ans1<<" "<<ans2<<endl;
  }
}
