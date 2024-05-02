#include <bits/stdc++.h>
using namespace std;

void solve(string s,string str){
    for(int i=0;i<str.length();i++){
      char a=str[i];
      for(int j=0;j<s.length();j++){
        if(a==s[j]){
          str[i]=s[j-1];
        }
      }
    }
    cout<<str;
}

void solve1(string s,string str){
    for(int i=0;i<str.length();i++){
      char a=str[i];
      for(int j=0;j<s.length();j++){
        if(a==s[j]){
          str[i]=s[j+1];
        }
      }
    }
    cout<<str;
}

int main() {
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin>>c;
    string str;
    cin>>str;
    string finnal="";
    if(c=='R'){
      solve(s,str);
    }
    else{
      solve1(s,str);
    }
    
}
