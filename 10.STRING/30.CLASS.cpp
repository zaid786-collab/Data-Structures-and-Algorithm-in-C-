#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s ="AB*abXYDEF#@pqr";
    // int k = s.length();
    // int n,m;
    // cin>>n>>m;
    // int count = 0;
    // for(int i=0;i<k;i++){
    //     if(int(s[i]>=n && s[i]<=m)){
    //         count++;
    //     }
    // }
    // cout<<count;

    
    // int n,k;
    // cin>>n>>k;
    // string c = "";
    // cin>>c;
    // cout<<c.substr(k,n-2*k);

    int n;
    cin>>n;
    string s[n] = {}; 
    for(int i=0;i<6;i++){
        cin>>s[i];
    }
    int l = s[0].length();
    for(int i=0;i<n/2;i++){
        cout<<s[i].substr(0,i+1) + s[n-i-1].substr(l-i-1,i+1);
        cout<<" ";
    }
    





    return 0;
}