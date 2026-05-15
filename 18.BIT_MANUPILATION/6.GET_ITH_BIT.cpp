#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int i = 1;
    int bit_mask = (1<<i);

    (!(n & bit_mask)) ? cout<<"0" : cout<<"1";

    return 0;
}
/*
1. To access the ith bit in a number. what value is present at ith bit ?.

2. To make a bit mask to access what is present at ith index first we will take left shift of 1[0000 0001] ith times and then and operator[&] with the output.

6 --> 0000 0110
1 --> 0000 0001 --> [1>>2] --> 0000 01__ --> 0000 0110 & 0000 0100 --> 4.
*/