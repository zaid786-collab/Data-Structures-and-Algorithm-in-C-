#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows,colns;
    cin>>rows>>colns;
    int* *matrix = new int*[rows];  // Creates an matrix of pointers pointing to 1D arrays of matrix.
    for(int i=0;i<rows;i++){       
        matrix[i] = new int[colns];
    }

    // DATA STORE : 
    int x = 1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<colns;j++){
            matrix[i][j] = x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<matrix[2][2]<<" = "<<*(*(matrix+2)+2)<<endl;

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
/*
1. It is not possible to directly creates an 2D dynamic array so we create an 1D dynamic arrays and merge them together to create 2D dynamic array.

2. In 1D Dynamic array each array conatin number of elements which is equal to number of columns.

3. We will create an array of pointer or pointer to pointer where each element will point to an pointer[row 1D dynamic arrays].
*/