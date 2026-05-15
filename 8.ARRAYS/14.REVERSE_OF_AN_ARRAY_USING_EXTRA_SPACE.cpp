#include<iostream>
using namespace std;

int reverse(int a[],int b[]){
    for(int i=0;i<5;i++){
        b[4-i] = a[i];
    }
    return 0;
}

int main(){
    int arr[5] = {5,4,3,9,2};
    int brr[5];
    reverse(arr,brr);
    
    cout<<"FORWARD ARRAY : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<5;i++){
        arr[i] = brr[i];
    }
    cout<<endl;
    cout<<"REVERSE ARRAY : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*
1) Space complexity is the relation between input size and extra space regarding it.

2) Space complexity is also of big of n. O(n).

3) Time complexity remains same as O(n).

4) Can also solve this without an extra space using O(1) space complexity.
*/