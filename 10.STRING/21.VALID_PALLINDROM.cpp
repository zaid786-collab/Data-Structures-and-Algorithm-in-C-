#include<bits/stdc++.h>
using namespace std;

bool reverse(char word[],int n){
    int i = 0;
    int c = n-1;
    while(i<=c){
        if(word[i++] != word[c--]){
            return false;
        }
    }
    return true;
}

int main(){
    char word[] = "racecnr";

    bool value = reverse(word,strlen(word));

    value == true ? cout<<"Pallindrom" : cout<<"Not a Pallindrom";
    return 0;
}
/*
1. Time Complexity is O(n).

2. isalnum() is a built-in C/C++ function that checks whether a character is alphanumeric.
✅ Meaning of isalnum(c)
It returns true if the character is:

A–Z

a–z

0–9

Otherwise, it returns false.
*/