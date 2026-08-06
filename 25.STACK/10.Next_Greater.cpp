// Time Complexity : O(n)

// Same concept of Stock Span Problem where to put elements in stack and compare but here finding next greater not previous one.

// Loop will begin from last to first as there is no greater element on right to last element.
// Next Greater : Next Greater to right of the number.

#include<bits/stdc++.h>
using namespace std;

void nextGreater (vector<int> arr,vector<int> &ans) {
    stack<int> s;
    int idx = arr.size() - 1; 
    ans[idx] = -1;      // No greater element to left of last element.
    s.push(arr[idx]);   // Push each element to the stack as it can be next greater 

    for(int i=idx-1;i >=0 ;i--){
        int curr = arr[i];

        while(!s.empty() && curr >= s.top()){     // Until next greater is not found keep on removing elements from stack
            s.pop();
        }

        // Special Case when Stack gets Empty as there is no elemnet on right of the curr number.
        if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();               // Adding next greater element for each element.
        }

        s.push(curr);     // Push each element to the stack as it can be next greater
    }
}

int main () {
    vector<int> arr = {6,18,0,1,30,56};
    vector<int> ans = {0,0,0,0,0,0,0};

    int size = arr.size();

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }cout << endl;

    nextGreater(arr,ans);

    for(int i=0;i<size;i++){
        cout << ans[i] << " ";
    }

    return 0;
}