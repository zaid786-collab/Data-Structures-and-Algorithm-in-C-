#include<iostream>
using namespace std;
int main(){
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    cout<<"ORIGNAL MATRIX : \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    int brr[2][3];
    cout<<"TRANSPOSE MATRIX : \n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            brr[i][j] = arr[i][j];
            cout<<brr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}