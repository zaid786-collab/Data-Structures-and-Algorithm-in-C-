#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5},{7}};
    cout<<matrix.size()<<endl; // Gives 3 as there are 3 rows.
    
    for(size_t i=0;i<matrix.size();i++){
        for(size_t j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    /*
    1. To create a 2D vecctor we have to crete an vector of 1D vectors,here size of 2D vector will give the number of rows present in a vector.

    2. To access the columns of 2D vector we need to pass the column index in a 2D array.

    3. Use size_t to stop the warning of comparision between signed and unsigned value.

    4. IN 2D Array it is not possible to create an 2D array of different rows size or rows with difeerent number of columns but that so possible in 2D vector.
    */
    return 0;
}