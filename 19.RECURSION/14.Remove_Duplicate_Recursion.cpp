#include<bits/stdc++.h>
using namespace std;
// Interview Asked Question in Google,Amazon.

// Make value true once you add it in answer,so next time it will not be added.
void removeduplicate(string str,string ans,int i,int map[26]){
    int n = str.size();
    if(i == n){
        cout<<"ans : "<<ans<<endl;
    }

    char ch = str[i];
    int mapind = (int)(ch-'a');

    if(map[mapind] == true){ // Duplicate
        removeduplicate(str,ans,i+1,map);
    }
    else{// Not Duplicate
        map[mapind] = true;
        removeduplicate(str,ans+str[i],i+1,map);
    }
}

int main(){
    string str = "zxcfxczdsizo";
    string ans = "";
    int map[26] = {false};

    removeduplicate(str,ans,0,map);
    return 0;
}