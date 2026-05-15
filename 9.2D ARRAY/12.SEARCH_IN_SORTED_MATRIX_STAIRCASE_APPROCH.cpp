#include<bits/stdc++.h>
using namespace std;

void stair(int arr[4][4],int n,int m,int key){
    int row = 0,column = m-1;
    while(row<n && column>=0){
        if(arr[row][column]==key){
            cout<<"Value Found at index "<<row<<","<<column;
            return;
        }
        else if(arr[row][column]>key){
            column--;
        }
        else{
            row++;
        }
    }
    cout<<"Key not found";
}

int main(){
    int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,49},{32,33,39,50}};

    stair(arr,4,4,1);
    return 0;
}
/*
1. In this approch we will search the required element is sorted 2-d matrix by staircase sorting algorithm,where rightmost and leftmost value plays an key role.
2. 2-D array is sorted both in row and column so if cell value less then key[to be found] then go downwards in column by incresing row number and if cell value greter then key then go backwards in row by decrising column.

3. Key > Cell --> Go Down by increasing row.
   Key < Cell --> Go Back by decreasing column. 

4. Time Complexity of Staircase search is o(n+m).

5. If n>>>m then T.C will be O(n) and if m>>>>n then T.C will be O(m).
*/