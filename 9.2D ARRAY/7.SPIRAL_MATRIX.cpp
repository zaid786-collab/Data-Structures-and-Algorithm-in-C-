#include<iostream>
using namespace std;

void spiral(int mat[4][4],int n,int m){
    int srow = 0,scol = 0;
    int erow = n-1,ecol = m-1;

    while(srow<=erow && scol<=ecol){
        // First Row
    for(int i=scol;i<=ecol;i++){
        cout<<mat[srow][i]<<" ";
    }
    // First Column
    for(int j=srow+1;j<=erow;j++){
        cout<<mat[j][ecol]<<" ";
    }
    // End Row
    for(int i=ecol-1;i>=scol;i--){
        if(srow==erow){ // To avoid Duplications[Corner Case].
            break;
        }
        cout<<mat[erow][i]<<" ";
    }
    // End Column
    for(int j=erow-1;j>=srow+1;j--){
        if(scol==ecol){  // To avoid Duplications
            break;
        }
        cout<<mat[j][scol]<<" ";
    }
    srow++,scol++;
    erow--,ecol--;
    }
    
}

int main(){
    int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    spiral(arr,4,4);
    return 0;
}