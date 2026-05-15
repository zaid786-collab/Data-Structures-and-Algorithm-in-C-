#include<bits/stdc++.h>
using namespace std;

bool check(string str1,string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    int aplh[26] = {0};
    for(int i=0;i<26;i++){
        aplh[str1[i]-'a']++; 
    }
    int s = str2.length();
    for(int i=0;i<s;i++){
        aplh[str2[i]-'a']--;
        if(aplh[str2[i]-'a']<0){
            return false;
        }
    }

    return true;
}

int main(){
    string str1 ="anagram";
    string str2 = "naagram";
    cout<<check(str1,str2); 
    return 0;
}