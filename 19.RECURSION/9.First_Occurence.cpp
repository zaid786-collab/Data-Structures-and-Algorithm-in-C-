#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &ans,int i){
    if(i==ans.size()){
        return -1;
    }

    if(ans[i]==70){
        return i;
    }
    return search(ans,i+1);
}

int main(){
    vector<int> arr = {1,2,4,7,5};
    cout<<"Index of First Occurance : "<<search(arr,0);
    return 0;
}