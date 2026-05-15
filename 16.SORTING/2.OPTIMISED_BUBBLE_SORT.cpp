#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {8,19,34,21,12,90,32,67};
    int size = arr.size(); 
    for(int i=0;i<size-1;i++){
        bool isSwap = false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            break;
        }
    }

    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}