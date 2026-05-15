#include<bits/stdc++.h>
using namespace std;
// Interview Asked Question in GoldSchen
int friends(int n){
    if(n==1 || n==2){
        return n;
    }

    //Single
    int single = friends(n-1);

    //Pairing
    int pair = (n-1)*friends(n-2);

    return single + pair;
}

int main(){
    cout<<"Total ways to pair friends : "<<friends(4);
    return 0;
}