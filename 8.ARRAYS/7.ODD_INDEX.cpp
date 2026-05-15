#include<iostream>
using namespace std;
int main(){
    int arr[8] = {2,6,9,7,4,3,6,5};
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<8;i++){
        if(i%2==0){
            arr[i] = arr[i] + 10;
        }
        else{
            arr[i] = arr[i]*2;
        }
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    } 
}