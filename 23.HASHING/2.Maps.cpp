#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string,int> m;

    m["Turkey"] = 200;
    m["Iran"] = 120;
    m["China"] = 110;
    m["Russia"] = 20;
    m["Japan"] = 90;

    for(pair<string,int> country : m){
        cout << country.first << "," << country.second <<endl;
    }

    m.erase("Japan");

    if(m.count("Japan") == 1){
        cout << "Japan Exists\n";
    }else{
        cout << "Japan do not exists\n";
    }

    for(pair<string,int> country : m){
        cout << country.first << "," << country.second <<endl;
    }
    

    return 0;
}