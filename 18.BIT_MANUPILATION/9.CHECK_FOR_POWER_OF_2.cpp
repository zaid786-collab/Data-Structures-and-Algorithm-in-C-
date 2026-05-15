#include<bits/stdc++.h>
using namespace std;
int main(){
    int  number = 7;
    if(!(number & (number-1))){
        cout<<"POWER OF 2";
    }
    else{
        cout<<"NOT A POWER OF 2.";
    }

    return 0;
}
/*
1.In all the numbers who are power of 2,onlt one bit is on and other are off[0].

2. And in the previous of that number or [number-1] all the bits are ON.
ex : 8 --> 1000 and 8-1 --> 111.

3. So take &[AND] between number and number-1 which will be zero so number is power of 2.
*/