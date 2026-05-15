#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &vec){
    vec[0] = 1;
    cout<<&vec<<endl;
}

int main(){
    /*
    1) Every function takes space in memory in form of stack,also called fucntion stack where data related to function is stored dynamically more the variables or content in function more space it will take in fucntion stack.
    2) All the data inside the function will remain inside of the fucntion memory in stack memory.
    
    3) When we store 10 in an integer variable then its binary form is 1010 but as int take 4 bytes[32 bits] in an memory so remaining 28 position are filled with 0. ex: 000000000....01010.

    4) We need to define the data type of a pointer because pointer should know which type of data it is pointing to,if it don't know about it then it can't access or control the entire part of memory from there.

    5) Derefrence variable is just an another name of existing variable not new variable nor pointer in a memory.
    */

    int x = 10;
    int* ptr = &x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr = 20;
    cout<<*ptr<<endl;
    cout<<"IMPORTANT : "<<&*ptr<<endl;

    int** ptr2 = &ptr;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl; // will point to the value store in pointer 1 which is address of x;

    int marks = 99;
    int &marksnew = marks;
    cout<<"OLD ADDRESS : "<<&marks<<"NEW ADDRESS : "<<&marksnew<<endl;

    vector<int> vec(1000000,7);

    print(vec);

    cout<<vec[0]<<endl;
    cout<<&vec<<endl;
    return 0;
}