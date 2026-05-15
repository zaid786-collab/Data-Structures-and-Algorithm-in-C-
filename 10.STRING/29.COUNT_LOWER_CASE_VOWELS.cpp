#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count = 0;
    int n = s.length()-1;
    for(int i=0;i<n;i++){
        if(s[i] == 'a' || s[i] =='e' || s[i] =='o' || s[i] =='u' || s[i]=='i'){
            count++;
        }
    }
    cout<<"NUMBER OF VOWELS : "<<count;
    return 0;
}