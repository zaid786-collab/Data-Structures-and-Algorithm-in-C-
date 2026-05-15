#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 8;
    int index = 3;
    int bitmask = ~(1<<index);

    cout<<(num & bitmask);

    return 0;
}
/*
1. Clear the bit means to concvert 1 to 0 and keep 0 to 0.

2. Here we will take AND with the number and putting 0 at the index to be clear.

3. Bitmask will be created using NOT of bitmask used in set_bit.

4. 6 --> 0110 --> 0110 & 0111 --> 0110[6].
   8 --> 1000 --> 1000 & 0111 --> 0000[0].
*/