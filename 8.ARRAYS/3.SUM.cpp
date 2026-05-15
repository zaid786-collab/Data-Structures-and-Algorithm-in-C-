#include<iostream>
using namespace std;
int suma(int arr[]){
    int sum = 0;
    for(int i=0;i<7;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    cout<<"ELEMENTS OF AN ARRAY  : "<<" \n";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    suma(arr);
    cout<<"\nSUM OF ALL THE ELEMENTS OF AN ARRAY IS : "<<suma(arr);
    return 0;
}