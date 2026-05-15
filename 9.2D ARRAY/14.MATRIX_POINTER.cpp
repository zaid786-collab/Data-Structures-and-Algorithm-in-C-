#include<bits/stdc++.h>
using namespace std;

// void funct(int mat[][3]){
    // cout<<"0th row ptr : "<<mat<<endl;
    // cout<<"1th row ptr : "<<mat+1<<endl;
    // cout<<"2nd row ptr : "<<mat+2<<endl;
    // cout<<"1th row value : "<<mat<<endl;
    // cout<<"2nd row value : "<<*(mat+1)<<endl;
    // cout<<"3rd row value : "<<*(mat+2)<<endl;
//     return;
// }

int funct2(int (*mat)[3]){
    cout<<mat<<endl;
    cout<<*(*(mat+2)+0)<<endl;
    return 0;
}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    funct2(arr);
    // cout<<arr<<endl; // First Row Adress
    // cout<<arr+1;    // Second Row Adress
    return 0;
}
/*
1. Just like an array name points to the first element in an array similarly array name of 2-d array points to the first row of an 2-d array.
2. 2-D Array name behaves as a row pointer.

3. While passing an 2D array to a function,we pass it by refernce by passing the row pointer.like : function (int (*ptr)[4]) or function(int mat[][4]).

4. Acessing any element via row pointer we can : *(*(ptr+i)+j) which is same as ptr[i][j]. 
*/