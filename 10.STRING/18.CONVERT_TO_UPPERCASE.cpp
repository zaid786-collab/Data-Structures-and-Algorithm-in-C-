#include<bits/stdc++.h>
using namespace std;

int main(){
    char word[] = "ApPle";
    int n = strlen(word);
    for(int i=0;i<n;i++){
        if(word[i] >='a' && word[i]<= 'z'){
            word[i] = word[i] - 'a' + 'A';
        }
    }

    cout<<word;
    
    return 0;
}