#include<bits/stdc++.h>
using  namespace std;
int main(){
    unsigned int number = 9;    // 1001
    int position = 3;
    number = number & (1<<position);
    int value = 0;
    cout<<(number | (value<<position));

    return 0;
}
/*
1. Use both CLEAR and SET as per given by user.

2. First we will clear[0] the ith bit to be updated.

3. Then take the OR[|] with value<<position.
eg : in case of 0 --> 0<<i.
     in case of 1 --> 1<<i.
*/