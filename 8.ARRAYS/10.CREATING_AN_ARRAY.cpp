#include<iostream>
using namespace std;
int main(){
    /*
    1) Array can be created in 3 ways :

    a) Only declaration and no inilisation : In this case all the indices are filled with garbage value.

    b) Declaration and some indices initilised : In this case uninitiled indices are filled with 0[NULL] in memory.

    c) Both declaration and initilisation but size not mentioned : In this case array is created of the size equals to number of values on right side of initilisation.

    2) Memory is statically allocated at an compile time.

    3) Array are not dynamic in nature which means that there size cannot be changed in an memory,that's the basic difference between an array and an vector.

    4) sizeof() will provide the size of an array which will be equal to total bytes it takes.
    */

    int marks[7];

    // int mark[10] = {1,2,3};

    // int markes[] = {1,2,3,4,5};

    cout<<sizeof(marks)<<endl;


    return 0;
}