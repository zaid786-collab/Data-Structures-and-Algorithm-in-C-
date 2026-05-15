#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {8,19,34,21,12,90,32,67};
    int size = arr.size(); 
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}

/*
1) Time Complexity of bubble sort is O(n^2).

2) By Changing the comparision operator we can convert this sorting from ascending to descending. 
*/