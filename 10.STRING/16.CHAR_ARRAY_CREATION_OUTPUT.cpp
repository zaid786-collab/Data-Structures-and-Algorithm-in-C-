#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1 : 
    char work1[] = "code";
    cout<<work1<<endl;

    // 2 :  
    char work[5] = "code";
    cout<<work<<endl;

    // 3 : 
    char wr[5] = {'c','o','d','e','\0'};
    cout<<wr<<endl;

    // 4 : In this case remaining indices are filled with garbage value.
    char w[50] = {'c','o','d','e','\0'};
    cout<<strlen(w)<<endl;

    return 0;
}
/*
1. Whenever an string literal is stored in a char array then bey default null charecter[\0] is inserted in it to end an string.

2. In length of a string null terminator is not counted.
*/