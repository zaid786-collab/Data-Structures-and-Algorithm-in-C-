#include<iostream>
using namespace std;

void out(int arr[],int value,int max_value){
    for(int i=0;i<6;i++){
        value = value + arr[i];
        max_value = max(max_value,value);
        if(value<0){
            value = 0;
        }
    }
    cout<<"MAX SUM IS : "<<max_value;
}

int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int value = 0;
    int max_value = INT8_MIN;
    out(arr,value,max_value);

    return 0;
}
/*
1) Kedanas algorithm is the most efficient algorithm with time complexity of O(n) only one loop.

2) It is a part of Dynamic Programming.
*/