#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {1,3,2,3,9,1,6,4,3};
    int n = arr.size()-1;
    int mx = *max_element(arr.begin(),arr.end());

    vector<int> count(mx+1,0);

    for(int i=0;i<=8;i++){
        count[arr[i]]++;
    }

    // Cummulative freq : 
    // int sum = 0;
    for(int i=1;i<=mx;i++){
        // sum += count[i];
        // count[i] = sum;
        count[i] += count[i-1];
    }

    vector<int> ans(n+1);

    //Traversing from last : 
    for(int i=n;i>=0;i--){
        ans[--count[arr[i]]] = arr[i];
    }

    for(int i=0;i<=n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}