#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >>a>>b;
    int max=0;
    if(a>b)max=a;
    else
    max=b;
    int ans=6-(max-1);
    if(6%ans==0)cout<<"1/"<<6/ans;
    else if(ans%2==0){
         cout<<ans/2<<"/"<<6/2;
    }
    else
    cout<<ans<<"/"<<"6";
    

    return 0;
}
