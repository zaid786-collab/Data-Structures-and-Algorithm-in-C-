#include<iostream>
using namespace std;
int main(){
    /*
    1) Data type modifiers are alter the meaning and size of a data type in a memory.
    ex : int can store data upto 4 bytes(32 bits) by using long and short it can be altered.
    2) Storage capacity is computer dependent so it can vary from user to user.

    3) long : it ensures that size of a data type to be more then 4 bytes.

    4) short : it decrese the memory by the size of 2 bytes.

    5) long long int : increase the value of int more then long.

    6) Signed and Unsigned : Half of the data space is lost in memory just to store -ve numbers,which are pre default by signed modifier but by using unsigned we can chose only positive numbers in a memory which double up the storage capacity.

    a) signed : same as int
    b) unsigned : can only stores non-negative numbers.

    note :  when we use unsigned then MSD bite(to make +ve and -ve number{0-- +ve and 1-- -ve number}) get freed and no more needed. 

    note : In signed and unsigned size remains same but capacity to hole positive numbers get increased.
    */

    // cout<<"SIZE OF INT : "<<sizeof(int)<<endl;
    // cout<<"SIZE OF LONG INT : "<<sizeof(long int)<<endl;
    // cout<<"SIZE OF DOUBLE : "<<sizeof(double)<<endl;
    // cout<<"SIZE OF LONG DOUBLE : "<<sizeof(long double)<<endl;

    // cout<<"SIZE OF INT : "<<sizeof(int)<<endl;
    // cout<<"SIZE OF SHORT INT : "<<sizeof(short int)<<endl;

    // cout<<"SIZE OF INT : "<<sizeof(int)<<endl;
    // cout<<"SIZE OF LONG LONG INT : "<<sizeof(long long int)<<endl;

    unsigned short int age;
    return 0;
}