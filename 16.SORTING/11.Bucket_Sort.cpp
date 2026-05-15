#include<bits/stdc++.h>
using namespace std;

void bucketsort(vector<float>& arr,int n){
    vector<vector<float>> buckets(n);

    for(int i=0;i<n;i++){
        int index = arr[i]*n;
        buckets[index].push_back(arr[i]);
    }

    for(int i=0;i<n;i++){
        sort(buckets[i].begin(),buckets[i].end());
    }

    int k = 0;
    for(int i=0;i<n;i++){
        for(float x : buckets[i]){
            arr[k++] = x;
        }
    }

}

int main(){
    vector<float> arr = {0.78, 0.17, 0.39, 0.26, 0.72};
    int n = 5;

    bucketsort(arr, n);

    for(float x : arr) {
        cout << x << " ";
    }
    return 0;
}