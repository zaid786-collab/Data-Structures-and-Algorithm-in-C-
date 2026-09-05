#include<bits/stdc++.h>
using namespace std;

int main () {
    string s = "aabccxb";
    vector<int> freq(26);
    int n = s.length();
    queue<char> q1;

    for(int i=0;i<n;i++) {
        freq[s[i] - 'a']++;
        q1.push(s[i]);

        while(!q1.empty()  && freq[q1.front() - 'a'] > 1) {
            q1.pop();
        }

        if(q1.empty()) {
            cout << -1 << " ";
        }
        else {
            cout << q1.front() << " ";
        }
    }

    return 0;
}