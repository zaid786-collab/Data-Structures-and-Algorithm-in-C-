#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,4,1,3,2,4,3,7};
    // Ascending Sorting : 

    sort(arr+2,arr+5);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Descending Sorting : 
    sort(arr,arr+8,greater<int>());
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*
1) Cpp have in built sorting function,with T.C of O(n*log(n)).
*/