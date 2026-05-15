#include<bits/stdc++.h>
using namespace std;

void bucketSort(float arr[], int n) {
    vector<vector<float>> buckets(n);

    // Put elements into buckets
    for(int i = 0; i < n; i++) {
        int index = n * arr[i];
        buckets[index].push_back(arr[i]);
    }

    // Sort each bucket
    for(int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // Merge buckets
    int k = 0;
    for(int i = 0; i < n; i++) {
        for(float x : buckets[i]) {
            arr[k++] = x;
        }
    }
}

int main() {
    float arr[] = {0.78, 0.17, 0.39, 0.26, 0.72};
    int n = 5;

    bucketSort(arr, n);

    for(float x : arr) {
        cout << x << " ";
    }
}