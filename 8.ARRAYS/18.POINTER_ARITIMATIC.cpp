#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *aptr = &a;

    cout<<aptr<<endl;
    aptr++;          // means adding one integer(4 bytes) into it.
    cout<<aptr<<endl;
    aptr--;
    cout<<aptr<<endl;
    return 0;
}

/*
1) Just like on variables we can also apply arthimatic operations on pointer as well but it works differently.

2) In pointer increment or decrement like (p++ or ++p) means our pointer will increse by the bytes of the data type.
ex : in case of intger pointer if it is pointing at 100 then ptr++ will increase it by 4 bytes to 104 in case of char it will by 1 byte.

3) So increment or decrement on pointer depends solely on data type of pointer.
*/