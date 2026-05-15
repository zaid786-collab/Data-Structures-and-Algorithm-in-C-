#include<bits/stdc++.h>
using namespace std;
int main(){
    // Left Shift << : 
    cout<< (7<<2) <<endl;

    // Right Shift << : 
    cout<< (7>>2) <<endl;
    return 0;   
}
/*
1. Bitwise leftshift means to shift the bit to left as per given. number << position to be shift.

ex : num = 7 --> 0000 0111 after 1 left shift 0000 111_ after 2nd left shift 0001 11__ and fill remaining blank spaces with 0 so answer is 28.

2. The final answer of leftshift is always equal to a<<b == a*2^b.
ex : 7<<2 == 7*2^2 == 28.

3. Bitwise rightshift means to shift the bit to right as per given. number >> position to be shift.

ex : num = 7 --> 0000 0111 after 1 left shift _000 0011 after 2nd left shift __00 0001 and fill remaining blank spaces with 0 so answer is 1.

4. The final answer of rightshift is always equal to a>>b == a/2^b.
ex : 7>>2 == 7/2^2 == 1.
*/