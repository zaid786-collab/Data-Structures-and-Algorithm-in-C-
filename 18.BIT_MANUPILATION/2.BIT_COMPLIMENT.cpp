#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 6; // In binary : 0000 0110
    cout<< "One's Compliment of a (~a): " << (~a) << endl; // Output: -7 (In binary:1111 1001)

    

    return 0;
}


/*
1. Binary Not Opearotor[~]: The binary NOT operator, also known as the one's complement operator, is a unary operator that inverts the bits of its operand. 
   It changes every 0 to 1 and every 1 to 0.

2. In case of Not opeartor,preceding zero can't be ignored. Hence the output is -7.
    For example, if we take the integer 6, its binary representation is 0000 0110. Applying the NOT operator results in 1111 1001.

3. Now after taking one compliment one time we will seprate the MSB bit which will check whether number is positve or negative and take 1s compliment again of remaning bits.

4. Then we will add 1 to the LSB of output and it will give us magnitude of a number.

Decimal Number --> 1s Compliment --> 1s Complimet[Seprating MSB] --> Add 1 to LSB --> Magnitude.

ex : 6 --> 0000 0110 --> [1]111 1001 --> -ve number --> 000 0110 + 1 --> 000 0111 --> -7[Output]. 
    
5.  Left most bit in a binary number is MSB[Most Significient Bit] it tells whether a is positive or negative. If MSB == 0 then it is a positive number else if MSD == 1 then it is a negative number.

6. In a 32 Bit Number Left Most Bit[MSB] decides +ve or -ve and remaining 31 decides magnitude.
*/