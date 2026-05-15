#include<iostream>
using namespace std;
int main(){
    /*
    1) Array is an linear collection of same type of data stored in a contigues memory location(together one after another).

    2) Index in array begins from 0 to n-1 location.
    */

    int x[5] = {3,5,7,9,4};
    for(int i=0;i<5;i++){
        cout<<x[i]<<" ";
    }

    return 0;
}