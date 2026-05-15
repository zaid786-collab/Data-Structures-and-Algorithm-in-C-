#include<bits/stdc++.h>
using namespace std;

int pow(int x,int n){
    if(n==0){
        return 1;
    }

    int halfpower = pow(x,n/2);
    int square = halfpower*halfpower;

    // If n is odd then x*x^n/2*x^n/2.
    if(n%2 != 0){
        return x*square;
    }
    // If n is even then x^n/2*x^n/2.
    return square;
}

int main(){
    cout<<pow(2,10);
    return 0;
}
/*
H.W : Make a Call Stack of above code and do dry run.
*/