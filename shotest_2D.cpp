#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int>v1;
    vector<int>v2;
    while (t--) {
        int a,b;
        cin>>a>>b;
        if(a>b)
        v1.push_back(a);
        else if(b>a)
        v2.push_back(b);
        else continue;
    }
    if(v1.size()>v2.size())cout<<"Mishka";
    else if(v1.size()<v2.size())cout<<"Chris";
    else
    cout<<"Friendship is magic!^^";
    return 0;
}
