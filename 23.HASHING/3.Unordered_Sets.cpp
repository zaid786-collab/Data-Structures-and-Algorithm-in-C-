#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> s;

    s.insert(9);
    s.insert(4);
    s.insert(3);
    s.insert(9);


    cout << s.size() << endl;
    
    for(auto &a : s){
        cout << a << "-->";
    }cout<<endl;

    if(s.find(6) != s.end()) cout<<"6 exist";
    else cout<<"6 doesn't exist";

    return 0;
}