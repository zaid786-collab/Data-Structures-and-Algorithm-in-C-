#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if((n & 1)){
        cout<<"ODD NUMBER";
    }
    else{
        cout<<"EVEN NUMBER";
    }
    return 0;
}
/*
1. 15 --> 0000 1111 now if the LSB is 1 which means number is ODD else number is EVEN so we take AND(&) with 0000 0001 [1].

2. Here 1[0000 0001] with which we take and[&] operator is known as Bit masks operator.

3. Bit masks are used to access specific bits in a byte of data.
*/