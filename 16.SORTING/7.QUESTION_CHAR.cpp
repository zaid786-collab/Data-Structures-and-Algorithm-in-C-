#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char> ch = {'c','d','z','m','a','t'};

    for(size_t i=1;i<=ch.size();i++){
        char current = ch[i];
        int prev = i-1;
        while(prev>=0 && ch[prev]<current){
                swap(ch[prev],ch[prev+1]);
                prev--;
            }
            ch[prev+1] = current;
    }

    for(size_t i=0;i<ch.size();i++){
        cout<<ch[i]<<" ";
    }
    return 0;
}