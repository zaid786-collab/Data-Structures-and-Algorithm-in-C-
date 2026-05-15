#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "appnnacollege";
    string ans = "";
    int n = s.size();
    vector<bool> ch(26,false);

    for(int i=0;i<n;i++){
        int o = s[i] - 'a';
        cout<<o<<endl;
        if(ch[o] == false){
            ans.push_back(s[i]);
            ch[o] = true;
        }
    }

    cout<<ans;
    return 0;
}