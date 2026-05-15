#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {2,7,11,15};
    int target = 13;
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == target){
                cout<<"["<<i<<","<<j<<"]"<<",";
            }
        }
    }
    return 0;
}
/*
1. Time Complexity is O(n^2).
*/