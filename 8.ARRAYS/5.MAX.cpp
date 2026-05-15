#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,10,67,48,24,68,89,54};
    int  ma = arr[0];
    for(int i=0;i<14;i++){
        if(arr[i]>ma){
            ma = arr[i];
        }
    }
    cout<<"THE MAXIMUM ELEMENT IN AN ARRAY IS : "<<ma;
    return 0;
}