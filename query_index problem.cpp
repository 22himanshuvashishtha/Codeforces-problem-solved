#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int create(int ind){
    int b;
    cin>>b;
    int a[b];
    for(int i=0;i<b;i++){
        cin>>a[i];
    }
    return a[ind];
}
int main() {
    int arr,query;
    cin>>arr>>query;
    int a[query];
    int i=0;
    int index;
    while(arr--){
        cin>>index;
        a[i]=create(index);
        i++;
    }   
    for(int j=0;j<query;j++){
        cout<<a[j]<<endl;
    }
    return 0;
}
