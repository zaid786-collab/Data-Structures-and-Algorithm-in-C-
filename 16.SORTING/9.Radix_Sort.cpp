#include<bits/stdc++.h>
using namespace std;


void countingsort(vector<int>& arr,int place){
    int n = arr.size() - 1;
    
    vector<int> count(10,0);

    for(int i=0;i<=n;i++){
        int digit = (arr[i]/place) % 10;
        count[digit]++;
    }

    for(int i=1;i<=n;i++){
        count[i] += count[i-1];
    }   

    vector<int> ans(n+1);

    for(int i=n;i>=0;i--){
        int digit = (arr[i]/place) % 10;
        ans[--count[digit]] = arr[i];
    }

    for(int i=0;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}

void radixsort(vector<int>& arr){
    int mx = *max_element(arr.begin(),arr.end());

    for(int place = 1;mx/place > 0;place *= 10){
        countingsort(arr,place);
    }
}

int main(){
    vector<int> arr = {237,146,259,348,152,163,235,42,36,62};

    radixsort(arr);

    return 0;
}