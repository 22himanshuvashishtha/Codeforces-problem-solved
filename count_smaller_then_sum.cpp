#include<bits/stdc++.h>
using namespace std;

int main() {
   int k;
    cin >> k;
    vector<int> a(12);
    for (int i = 0; i < 12; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
   int sum=0;
   int count=0;
   if(k==0){
      cout<<"0";
   }
   else{
   for(int i=11;i>=0;i--){
      sum+=a[i];
      if(k>sum){
         count++;
      }
      else{
          count++;
         break;
      }
   }
   if(sum < k){ 
        cout << -1; 
    } 
   else{
        cout << count;
   }
   }
   return 0;
}
