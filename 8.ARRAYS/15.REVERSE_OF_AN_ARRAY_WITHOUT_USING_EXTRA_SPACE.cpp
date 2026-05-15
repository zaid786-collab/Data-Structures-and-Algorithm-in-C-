#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5,4,3,9,2};
    int n = 0;
    // int temp = 0;
    int m = 4;

    while(n<m){
        swap(arr[n],arr[m]);
        // temp = arr[m];
        // arr[m] = arr[n];
        // arr[n] = temp;
        n = n + 1;
        m = m - 1;
    }
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
/*
1) In this also time complexity remains same O(n).
*/