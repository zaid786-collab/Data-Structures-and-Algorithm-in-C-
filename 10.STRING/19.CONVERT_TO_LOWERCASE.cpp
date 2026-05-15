#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[] = "APpLe";
    int n = strlen(str);

    for(int i=0;i<n;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i] - 'A' + 'a';
        }
    }

    cout<<str;
    return 0;
}
/*
1. tolower() is a built-in C/C++ function that converts a character to lowercase.

✅ What tolower() does

If the character is uppercase (A–Z), it converts it to lowercase (a–z).

If the character is already lowercase or a digit, it returns it unchanged.
*/