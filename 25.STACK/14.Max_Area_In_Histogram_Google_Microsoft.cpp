// Bars are given in histogram,we have to find the maximum possible area that can be made by one bar.

// Approach : Traverse to each bar and for each bar height is fixed which is height[i] but to find width traverse on both left and right bars until bar with smaller height is encountered or histogram ends and width will be then width = r - l - 1.

// Calculate Next Smaller Left and Next Smaller Right by removing larger elements from the stack for each bar, same logic as Next Greater Element Q.

// Note : Classical Stack Question,asked in Google and Microsoft.

#include<bits/stdc++.h>
using namespace std;

int maxareahistogram (vector<int> heights) {
    int n = heights.size();

    vector<int> nsl(n);
    vector<int> nsr(n);
    stack <int> st;

    // Next Smaller Left : nsl :
    nsl[0] = -1;
    st.push(0);
    for(int i=1;i<n;i++){
        int curr = heights[i];

        while(!st.empty() && curr <= heights[st.top()] ){
            st.pop();                       // Removing Largere elements from the stack
        }

        if(st.empty()) {
            nsl[i] = -1;
        }
        else {
            nsl[i] = st.top();     
        }
        st.push(i);           // we need index to get the width in this Q so don't push value. 
    }

    while(!st.empty()) {
        st.pop();
    }

    // Next Smaller Right : nsr : Traverse from end to start here in this case to get smaller right and also instead of -1 add the size of heights array.

    st.push(n-1);
    nsr[n-1] = n;

    for(int i=n-2;i>=0;i--) {
        int curr = heights[i];
        
        while(!st.empty() && curr <= heights[st.top()]){
            st.pop();
        }

        if(st.empty()) {
            nsr[i] = n;    // Instead of -1 do n.
        }
        else {
            nsr[i] = st.top();     
        }
        st.push(i);
    }

    // Max Area of Histogram  :

    int maxArea = 0;

    for(int i=0;i<n;i++){
        int height = heights[i];
        int width = (nsr[i] - nsl[i] - 1);
        int area = height * width;
        maxArea = max(maxArea,area);
    }

    return maxArea;

}

int main () {

    vector<int> heights = {2,1,5,6,2,3};

    cout << "Max Area in Histogram is : " << maxareahistogram(heights);

    return 0;
}