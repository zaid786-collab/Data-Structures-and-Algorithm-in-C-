#include<iostream>
using namespace std;

int sum(int a,int b=1){
    int z = a + b;
    return z;
}

int diff(int a,int b=9){
    int z = a - b;
    return z;
}

int main(){
    // return type f.name (parameter_1,parameter_2){
    //     body;
    // }
    // When values are passed in via function then it have more precedence then value that are initilesed in parameters.
    int u = sum(2,3);
    cout<<u<<endl;
    int i = diff(15,2);
    cout<<i<<endl;
    return 0;
}