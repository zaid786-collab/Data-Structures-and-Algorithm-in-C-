#include<iostream>
using namespace std;
int pro(int arr[]){
    int product = 1;
    for(int i=0;i<7;i++){
        product = product*arr[i];
    }
    return product;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    cout<<"ELEMENTS OF AN ARRAY : ";
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    pro(arr);
    cout<<"\nPRODUCT OF ELEMENTS OF AN ARRAY : "<<pro(arr);
    return 0;
}