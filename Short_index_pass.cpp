#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>c1;
    vector<int>c2;
    vector<int>c3;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            c1.push_back(i+1);
        }
        else if(arr[i] == 2){
            c2.push_back(i+1);
        }
        else{
            c3.push_back(i+1);
        }
    }
    int max=0;
    if(c1.size()<=c2.size() && c1.size()<=c3.size())max=c1.size();
    else if(c2.size()<c1.size() && c2.size()<c3.size())max=c2.size();
    else max=c3.size();
     if(max>0){
     cout<<max<<endl;    
    for(int i=0;i<max;i++){
        cout<<c1[i]<<" "<<c2[i]<<" "<<c3[i]<<endl;
    }
    }
    else cout<<"0";
}
