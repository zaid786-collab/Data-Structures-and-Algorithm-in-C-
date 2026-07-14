#include<bits/stdc++.h>
using namespace std;

int main () {
    set<int> m;

    m.insert(2);
    m.insert(9);
    m.insert(4);
    m.insert(3);
    m.insert(88);

    cout << m.size() << endl;

    for(auto &a : m){
        cout << a << " ";
    }

    if(m.count(99)) {
        cout << "\n99 is Present";
    }else{
        cout<<"\n99 is not present";
    }

    return 0;
}