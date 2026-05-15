#include<iostream>
using namespace std;
//  VARIBLE ARE PASS BY VALUE BUT OUR ARRAY ARE PASS BY REFERNCE.
void change(int arr[]){
    arr[0] = 7;
}

int main(){
    int arr[] = {1,3,5};
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    change(arr);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}