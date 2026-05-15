#include<bits/stdc++.h>
using namespace std;
// Divide and Conqure is one of the recursive algorithm which means to divide the big problem into smaller one solve them and then combine their solution.

// Time Complexity of Merge Sort is O(nlogn) and Space Complexity of Merge Sort is O(n) which is quite good as compare to selection,insertion and bubble sort's T.C of O(n^2).

//The logic of Merge Sort is very important for interview purpose.

// We have to sort the numbers in array in asending order so logic of Merge Sort will work like : 
// 1. First we will Divide the array into 2 parts by finding mid and then sort the left and right part seprately.
// 2.Then we will call Merge Sort again for left and right half and we will divide the left and right half further by mid value.
// 3.After applying Merge Sort recursively we will reach to base case where only one number is left in an array.
// 4.Now to combine the final base cases into one big solution we will create Merge function which is most crucial step here.

// Merge Sort Algorithm --> Divide -- MergeSort[left] && MergeSort[right] -- MergeFunction.

// In the Combine Step of MergeSort we will traverse on left and right segemnt by two pointers i=0 and j=[mid+1] and store the sorted values in temporary array after that we will copy temperory array to main array. 
int main(){
    
    return 0;
}