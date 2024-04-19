#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   vector<int>v(t);
   vector<int>v1;
   for(int i=0;i<t;i++){
       cin>>v[i];
   }
   int count=1;
   for(int i=0;i<t-1;i++){
      if(v[i+1]>=v[i]){
       count++;
      }
      else
      {
          v1.push_back(count);
          count=1;
      }
   }
   v1.push_back(count);
   int m= *max_element(v1.begin(),v1.end());
   cout<<m;

   return 0;
}
