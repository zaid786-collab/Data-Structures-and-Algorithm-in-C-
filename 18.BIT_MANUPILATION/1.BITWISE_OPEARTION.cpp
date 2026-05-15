#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 5; // In binary : 0101
    int b = 3; // In binary : 0011

    cout<< "Bitwise AND (a & b): " << (a & b) << endl;   // Output: 1  (0001)
    cout<< "Bitwise OR (a | b): " << (a | b) << endl;    // Output: 7  (0111)
    cout<< "Bitwise XOR (a ^ b): " << (a ^ b) << endl;   // Output: 6  (0110)
    return 0;
}
/*
1.  Bitwise AND (&): Compares each bit of two integers and returns a new integer where each bit is set to 1 only if 
    both corresponding bits of the operands are also 1.
2.  Bitwise OR (|): Compares each bit of two integers and returns a new integer where each bit is set to 1 if at least
    one of the corresponding bits of the operands is 1.
3.  Bitwise XOR (^): Compares each bit of two integers and returns a new integer where each bit is set to 1 if the
    corresponding bits of the operands are different (one is 1 and the other is 0        
*/