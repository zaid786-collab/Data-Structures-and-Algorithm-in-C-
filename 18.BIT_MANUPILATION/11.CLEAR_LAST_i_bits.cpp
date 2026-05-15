#include<bits/stdc++.h>
using namespace std;
int main(){
    int number = 9;
    int index  = 2;
    cout<<(number & ((~0)<<index));
    return 0;
}