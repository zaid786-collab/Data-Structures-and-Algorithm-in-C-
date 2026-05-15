#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"ENTER THE ELEMENT OF AN ARRAY : ";
            cin>>arr[i][j];
        }
    }
    cout<<"\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
/*
1) A 2-D array is represnted as a contigues allocation[linear] in a memory,Both in Row Major and Column Major.

*/