#include<bits/stdc++.h>
using namespace std;

vector<int> selection(vector<int> &arr){
    for(size_t i=0;i<arr.size()-1;i++){
        size_t  min = i;
        for(size_t j=i;j<arr.size();j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
    return arr;
}

int main(){
    vector<int> arr = {5,4,1,3,2};
    selection(arr);
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}
/*
1) Selection Sort traverse in an array and pickup the smallest element from it and put it in front freezing it in next iteration.

2) In bubble sort we do comparision between two consecutive values in a loop then check largest among both but In selection sort i get fixed as min and compared with rest of the loop and only be replaced by min value in an array else not.

3) ChatGPT said:

size_t is one of the most commonly used data types in C++, especially when working with arrays, vectors, loops, and memory-related operations.
i is signed
arr.size() is unsigned

This causes a warning:
"comparison between signed and unsigned integer"

Using size_t fixes it.
now both sides are unsigned.

4) Time Complexity of selection sort is O(n^2) which is bad,T.C of good sorting algorithms is O(n^log(n)) like merge sorting or some cpp inbuilt one.
*/