#include<iostream>
using namespace std;
int main(){
    /*
    1) We assign NULL value to a pointer to show that it doesn't point to any location,otherwise it will hsow any random address.
        int* ptr = NULL;

    2) Dereferencing a null pointer is not possible as it will result in an error[segmentation fault]. 
    
    3) NULL pointer holds the 0 value as an address.

    4) Can also initilise by 0 value instead of NULL.
    */

    // int a = 3;
    int* z = NULL;
    cout<<z; 

    cout<<*z<<endl;
    return 0;
}