#include<iostream>
using namespace std;

void out(int arr[],int value,int start,int max_value){
    for(int i=0;i<6;i++){
        value = 0;
        for(int j=start;j<6;j++){
            value = value + arr[j];
            cout<<value<<" ";
            max_value = max(max_value,value);
        }
        start = start + 1;
        cout<<endl;
    }
    cout<<"MAX SUM : "<<max_value<<endl;
}

int main(){
    int arr[6] = {2,-3,6,-5,4,2};

    int value = 0;
    int start = 0;
    int max_value = INT8_MIN;
    out(arr,value,start,max_value);
    return 0;
}

/*
1) There are 3 approches to solve this problem : 

a) Boot Force
b) Optimised version
c) Kedanas Method

we will go for all of them one by one.

2) Time Complexity of this Boot Force method is O(n*3) whcih is not a good time complexity so we will go for optemisied version of it.

3) INT_MIN and INT_MAX are predefined macros in cpp which we used here.

4) Time complexity of my code is O(n*2) as it is optimised version of boot force having 2 loops only.
*/