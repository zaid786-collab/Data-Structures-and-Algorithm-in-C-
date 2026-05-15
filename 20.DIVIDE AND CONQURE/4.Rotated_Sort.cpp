#include<bits/stdc++.h>
using namespace std;
// TC : O(logn)
// Leetcode Q : 33,81,153,154,1752.
// Logic : Updated Binary Search Approch.
int search(vector<int> arr,int si,int ei,int target){
        if(si>ei){
            return -1;
        }
        int mid = (si + ei)/2;
        if(arr[mid] == target){
            return mid;
        }
        //Condition for line 1 : 
        if(arr[si]<=arr[mid]){
            if(arr[si]<= target && target < arr[mid]){
                //left half
                return search(arr,si,mid-1,target);
            }
            else{
                //right half
                return search(arr,mid+1,ei,target);
            }
        }
        //Condition for line 2 : 
        else{
            if(arr[mid] < target && target <= arr[ei]){
                //right half
                return search(arr,mid+1,ei,target);
            }
            else{
                //left half
                return search(arr,si,mid-1,target);
            }
        }
}

int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int n = arr.size();

    cout<<"Idx : "<<search(arr,0,n-1,9);
}