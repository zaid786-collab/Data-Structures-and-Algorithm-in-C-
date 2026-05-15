#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 6;
    int index = 3;

    cout<<(num | (1<<index));
    return 0;
}
/*
1. SET the ith bit means to convert the bit into 1,means 0 to 1 and 1 to 1.

2. we will take OR with bitmask of 1 at ith index.[number | 1<<i.]

*/