#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    int start = 0;
    int end = vec.size() - 1;
    while (start < end) {
        int sum = vec[start] + vec[end];

        if (sum == target) {
            cout << "TARGET AT INDICES : [" << start << "," << end << "]";
            break;   
        }
        else if (sum > target) {
            end--;   
        }
        else {
            start++;
        }
    }
    return 0;
}
/*
1. Two Pointer approch with time complexity of O(n).
*/