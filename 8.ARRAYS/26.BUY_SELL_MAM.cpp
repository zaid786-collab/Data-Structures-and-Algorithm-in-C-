#include<iostream>
#include<algorithm>
using namespace std;

void max(int arr[],int n){
    int bestbuy[100000];
    bestbuy[0] = INT8_MAX;
    for(int i=1;i<n;i++){
        bestbuy[i]  = min(bestbuy[i-1],arr[i-1]);
    }

    int maxProfit = 0;
    for(int i=0;i<n;i++){
        int profit = arr[i]-bestbuy[i];
        maxProfit = max(maxProfit,profit);
    }
    cout<<"MAX PROFIT IS : "<<maxProfit<<endl;
}

int main(){
    int arr[6] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(int);

    max(arr,n);
    return 0;
}

/*
1) Time complexity is O(n+n) = O(2n) = O(n).
*/