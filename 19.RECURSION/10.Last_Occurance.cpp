#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &ans,int target,int i){
    if(i<0){
        return -1;
    }

    if(ans[i]==70){
        return i;
    }
    return search(ans,target,i-1);
}

int main(){
    vector<int> arr = {1,7,4,7,5};
    int n = arr.size();
    cout<<"Index of Last Occurance : "<<search(arr,7,n);
    return 0;
}