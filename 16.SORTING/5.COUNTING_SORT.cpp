#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,4,1,3,2,4,3,7};
    int n = 8;
    int mx = *max_element(arr,arr+n);
    int mn = *min_element(arr,arr+n);
    
    vector<int> freq(mx+1,0);
    
    for(int i=0;i<8;i++){
        freq[arr[i]]++;
    }
    
    for(int i=mn,index= 0;i<mx;i++){
        while(freq[i]--){
            arr[index++] = i;
        }
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*
1) COUNTING SORT is used when the range of array(max and min term) is less and all are mostly positive.

2) Use a frequency count of elements from max to min.

3) First we will make a frequency array where values in array arr will be indices in array frequency then we will check the frequency of all elements,after that we will reinsert elements in array arr based on their frequency in sorted order.
*/