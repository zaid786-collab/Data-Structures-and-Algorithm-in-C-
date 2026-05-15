#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {5,4,1,3,2};
    for(int i=1;i<=5;i++){
        int current = arr[i];
        int previous = i-1;
        while(previous>=0 && arr[previous]>current){
            swap(arr[previous],arr[previous+1]);
            previous--;
        }
        arr[previous+1] = current;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*
1) In INSERTION SORT we assume one part of array as sorted and remaning part as unsorted array.

2) We pickup the elements from unsorted part and put it in sorted part based on their position.

3) Initially we assume only first index as sorted as remaning part as unsorted.

4) while we do sorting with each part sorted part keep on incresing and unsorted decreses.

5) Time Complexity of insertion sort is O(n^n).
*/class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string t = "";

        for(char c : s){
            if(c!='0'){
                t += c;
            }
        }

        if(t==""){
            return 0;
        }

        long long sum = 0;
        for(char i : t){
            sum += (i-'0');
        } 
        
        long long x = 0;
        for(char c : t){
            int d = c - '0';
            if (x > (LLONG_MAX - d) / 10) {
            return 0;
            }
            x = x*10+d;
        }
        
        return x*sum;
    }
};