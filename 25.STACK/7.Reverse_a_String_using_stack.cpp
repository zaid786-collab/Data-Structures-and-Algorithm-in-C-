#include<bits/stdc++.h>
using namespace std;

//  Time Complexity : O(N), Space Complexity : O(N)

string revsersestring(string &m){
    string ans;

    stack<char> s;

    int length = m.length();

    for(int i=0;i<length;i++){
        s.push(m[i]);
    }

    while(!s.empty()){
        ans += s.top();
        s.pop();
    }

    return ans;
}

int main() {
    
    string o = "Hello World";

    string ans = revsersestring(o);

    cout <<"Reverse : "<<ans;

    return 0;
}