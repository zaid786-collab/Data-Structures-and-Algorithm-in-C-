#include<bits/stdc++.h>
using namespace std;
int main(){
    // char ch[] = {'a','b','c','d','e'} ;
    // cout<<ch[1]<<endl;

    char st[] = {'c','o','d','e','\0'};
    cout<<st<<endl;
    return 0;
}
/*
1. Char array is used same like an integer array.

2. But when we use charecter array to store a string then we use terminator '\0'  whose ASCII value is 0 which means that one word is ended.

3. By using the name of an array in case of integer or other the address of 0th index of that array is obtained,but in case of char array the entier string is obtained by using the name of an array.

4. String are always terminated by \0.

5. String Laterals are fixed values and they don't end with \0.
*/