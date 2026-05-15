#include<bits/stdc++.h>
using namespace std;

string reverse(char word[],int n){
    int i = 0;
    int c = n-1;
    while(i<=c){
        swap(word[i++],word[c--]);
    }
    return word;
}

int main(){
    char str[] = "Coding";
    cout<<reverse(str,strlen(str));
    return 0;
}
/*
Time Complexity is O(n).

2. To get string length do string_name.length() rather the strlen() which is for char arrays.
*/